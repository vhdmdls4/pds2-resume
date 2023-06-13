#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> dados = {}; // vetor redimensionável com array por baixo
  vector<string> lista_letras = {};

  int iterador = 0;
  int contador = 0;

  while (iterador >= 0)
  {
    cout << "Digite o " << contador + 1 << "esimo numero (-1 para terminar): " << endl;
    cin >> iterador;
    if (iterador < 0)
      break;
    dados.push_back(iterador);
  }

  for (int x : dados)
    cout << x << endl;

  for (int &x : dados)
  {
    x *= 2;
    cout << x << " por referencia" << endl;
  }

  return 0;
}