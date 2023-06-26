#include "pessoa.hpp"
#include <iostream>

using namespace std;

int main()
{

  cout << "Digite o peso de uma pessoa, a nacionalidade e sua altura" << endl;

  float peso, altura;

  string nacionalidade;

  cin >> peso;
  cin >> nacionalidade;
  cin >> altura;

  pessoa p1(81.2, "Brasilena", 1.77);

  pessoa p2(peso, nacionalidade, altura);

  cout << "p1: " << endl;

  p1.get_peso();

  p1.get_nacionalidade();

  p1.get_altura();

  cout << "p2: " << endl;

  p2.get_peso();

  p2.get_nacionalidade();

  p2.get_altura();

  return 0;
}