#include "pessoa.hpp"

#include <iostream>

pessoa::pessoa(float p, std::string n, float a)
{

  peso = p;
  nacionalidade = n;
  altura = a;
};

void pessoa::get_peso()
{
  std::cout << peso << std::endl;
}

void pessoa::get_nacionalidade()
{
  std::cout << nacionalidade << std::endl;
}

void pessoa::get_altura()
{
  std::cout << altura << std::endl;
}
