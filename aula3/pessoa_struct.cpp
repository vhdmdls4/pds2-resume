#include <iostream>

// structs

using namespace std;

struct pessoa
{
  float peso;
  float altura;
  string nome;
};

int main()
{
  pessoa p1;
  cout << "Digite peso, altura e nome respectivamente: " << endl;
  cin >> p1.peso;
  cout << endl;
  cin >> p1.altura;
  cout << endl;
  cin >> p1.nome;
  cout << endl;
  cout << p1.nome << " eh seu nome, ele mede " << p1.altura << "m e tem " << p1.peso << "kg" << endl;

  return 0;
}