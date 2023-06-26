#include "jogador.hpp"
#include <iostream>

Jogador criarJogador(float peso, std::string nacionalidade, float altura, float forca, float velocidade)
{
  Jogador jogador;
  jogador.peso = peso;
  jogador.nacionalidade = nacionalidade;
  jogador.altura = altura;
  jogador.forca = forca;
  jogador.velocidade = velocidade;
  return jogador;
}

void exibirJogador(const Jogador &jogador)
{
  exibirPessoa(jogador);
  std::cout << "Força: " << jogador.forca << std::endl;
  std::cout << "Velocidade: " << jogador.velocidade << std::endl;
}
