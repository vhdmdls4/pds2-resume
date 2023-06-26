#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include "pessoa.hpp"

struct Jogador : public Pessoa
{
  float forca;
  float velocidade;
};

Jogador criarJogador(float peso, std::string nacionalidade, float altura, float forca, float velocidade);
void exibirJogador(const Jogador &jogador);

#endif
