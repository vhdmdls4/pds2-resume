#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class Matriz
{
protected:
  int linhas;
  int colunas;
  vector<vector<int>> matriz;

public:
  Matriz(int linhas, int colunas) : linhas(linhas), colunas(colunas)
  {
    matriz.resize(linhas, vector<int>(colunas, 0));

    int valor = 1;
    for (int i = 0; i < linhas; i++)
    {
      for (int j = 0; j < colunas; j++)
      {
        matriz[i][j] = valor++;
      }
    }
  }

  virtual ~Matriz() {}

  virtual Matriz *clone() const
  {
    return new Matriz(*this);
  }

  virtual Matriz &operator+(const Matriz &outra) const
  {
    if (linhas != outra.linhas || colunas != outra.colunas)
    {
      throw runtime_error("Matrizes de tamanhos diferentes.");
    }

    Matriz *resultado = new Matriz(linhas, colunas);
    for (int i = 0; i < linhas; i++)
    {
      for (int j = 0; j < colunas; j++)
      {
        resultado->matriz[i][j] = matriz[i][j] + outra.matriz[i][j];
      }
    }
    return *resultado;
  }

  virtual Matriz &operator-(const Matriz &outra) const
  {
    if (linhas != outra.linhas || colunas != outra.colunas)
    {
      throw runtime_error("Matrizes de tamanhos diferentes.");
    }

    Matriz *resultado = new Matriz(linhas, colunas);
    for (int i = 0; i < linhas; i++)
    {
      for (int j = 0; j < colunas; j++)
      {
        resultado->matriz[i][j] = matriz[i][j] - outra.matriz[i][j];
      }
    }
    return *resultado;
  }

  virtual Matriz &operator*(const Matriz &outra) const
  {
    if (colunas != outra.linhas)
    {
      throw runtime_error("Tamanhos incompatíveis para multiplicação de matrizes.");
    }

    Matriz *resultado = new Matriz(linhas, outra.colunas);
    for (int i = 0; i < linhas; i++)
    {
      for (int j = 0; j < outra.colunas; j++)
      {
        for (int k = 0; k < colunas; k++)
        {
          resultado->matriz[i][j] += matriz[i][k] * outra.matriz[k][j];
        }
      }
    }
    return *resultado;
  }

  friend ostream &operator<<(ostream &os, const Matriz &matriz)
  {
    for (int i = 0; i < matriz.linhas; i++)
    {
      for (int j = 0; j < matriz.colunas; j++)
      {
        os << matriz.matriz[i][j] << " ";
      }
      os << endl;
    }
    return os;
  }
};

class MatrizNaoQuadrada : public Matriz
{
public:
  MatrizNaoQuadrada(int linhas, int colunas) : Matriz(linhas, colunas) {}

  virtual MatrizNaoQuadrada *clone() const override
  {
    return new MatrizNaoQuadrada(*this);
  }
};

int main()
{
  try
  {
    Matriz matriz1(3, 3);
    Matriz matriz2(3, 3);
    Matriz matriz3(3, 3);
    MatrizNaoQuadrada matriz4(3, 2);
    MatrizNaoQuadrada matriz5(2, 4);

    // Operações entre matrizes
    Matriz resultado1 = matriz1 + matriz2;
    Matriz resultado2 = matriz1 - matriz3;
    Matriz resultado3 = matriz1 * matriz3;

    cout << "Resultado 55:" << endl
         << matriz1 << endl;

    cout << "Resultado 556:" << endl
         << matriz3 << endl;

    cout << "Resultado 1:" << endl
         << resultado1 << endl;
    cout << "Resultado 2:" << endl
         << resultado2 << endl;
    cout << "Resultado 3:" << endl
         << resultado3 << endl;

    // Tenta fazer operações com matrizes incompatíveis
    Matriz resultado4(3, 3);
    resultado4 = matriz1 + matriz4; // Gera exceção

    // O código abaixo não será executado se uma exceção for lançada
    cout << "Resultado 4:" << endl
         << resultado4 << endl;
  }
  catch (const exception &e)
  {
    cerr << "Erro: " << e.what() << endl;
  }

  return 0;
}
