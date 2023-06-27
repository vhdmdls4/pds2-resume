#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  string palavra_lida;
  cout << "Digite uma palavra que eu retornarei quantas vezes cada letra aparece nela: ";
  cin >> palavra_lida;

  vector<int> palavra_vector(palavra_lida.begin(), palavra_lida.end());

  // transformei a palavra em um vetor de inteiros;

  int n = palavra_vector.size();
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (palavra_vector[j] > palavra_vector[j + 1])
      {
        int temp = palavra_vector[j];
        palavra_vector[j] = palavra_vector[j + 1];
        palavra_vector[j + 1] = temp;
      }
    }
  }

  int aparece = 1;
  // quantas vezes a letra aparece;

  char c;
  // para imprimir o char correspondente ao int de palavra_vector;

  for (int j = 0; j < palavra_vector.size(); j++)
  {
    char c = palavra_vector[j];
    if (palavra_vector[j] == palavra_vector[j + 1])
    {
      // percorro todo o array e vejo se aparecem letras repetidas, se sim, sinalizo adicionando +1 ao aparece
      aparece++;
    }
    if (palavra_vector[j] != palavra_vector[j + 1])
    {
      // se não, é outra letra ou é o fim do array, então eu imprimo com os dados anteriores e volto a sinalização para apenas 1, para verificar se aparece;
      cout << c << " " << aparece << endl;
      aparece = 1;
    }
  }

  return 0;
}