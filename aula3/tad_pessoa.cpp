#include <iostream>

using namespace std;

struct pessoa
{
  float peso;
  string nacionalidade;
  float altura;

  pessoa(float p, std::string n, float h)
  {
    peso = p;
    nacionalidade = n;
    altura = h;
  }

  void get_peso()
  {
    std::out << pessoa.peso << std::endl;
  }

  void get_gentilico()
  {
    std::out << pessoa.nacionalidade << std::endl;
  }

  void get_altura()
  {
    std::out << pessoa.altura;
    << std::endl;
  }
};

int main()
{

  return 0;
}
