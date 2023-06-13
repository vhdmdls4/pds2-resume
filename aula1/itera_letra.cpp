#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
  vector<char> lista_letras = {};

  int num_letras;

  cout << "digita o numero de letras para salvar na lista" << endl;

  cin >> num_letras;
  int conta_letras = 0;

  while (conta_letras < num_letras)
  {
    char letra;
    cout << "Digita a letra a ser salva: " << endl;
    cin >> letra;
    while (!isalpha(letra))
    {
      cout << "nao eh uma letra, digite uma letra valida: " << endl;
      cin >> letra;
      cout << endl;
    }
    cout << "voce digitou a letra: " << letra << endl;
    if (isalpha(letra))
    {
      lista_letras.push_back(letra);
      conta_letras++;
    }
  }

  for (char letras : lista_letras)
    cout << letras << endl;

  return 0;
}