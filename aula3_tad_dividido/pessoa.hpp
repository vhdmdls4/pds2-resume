#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>

struct Pessoa
{
  float peso;
  std::string nacionalidade;
  float altura;
};

Pessoa criarPessoa(float peso, std::string nacionalidade, float altura);
void exibirPessoa(const Pessoa &pessoa);

#endif
