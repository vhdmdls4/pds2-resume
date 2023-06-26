#include "pessoa.hpp"
#include <iostream>

Pessoa criarPessoa(float peso, std::string nacionalidade, float altura)
{
  Pessoa pessoa;
  pessoa.peso = peso;
  pessoa.nacionalidade = nacionalidade;
  pessoa.altura = altura;
  return pessoa;
}

void exibirPessoa(const Pessoa &pessoa)
{
  std::cout << "Peso: " << pessoa.peso << " kg" << std::endl;
  std::cout << "Nacionalidade: " << pessoa.nacionalidade << std::endl;
  std::cout << "Altura: " << pessoa.altura << " m" << std::endl;
}
