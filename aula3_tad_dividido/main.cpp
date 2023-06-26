#include "pessoa.hpp"
#include "jogador.hpp"
#include <iostream>

using namespace std;

int main()
{
  Pessoa pessoa = criarPessoa(75.5, "Brasileira", 1.8);
  exibirPessoa(pessoa);

  cout << endl;

  Jogador jogador = criarJogador(80.2, "Argentino", 1.85, 90.5, 30.2);
  exibirJogador(jogador);

  return 0;
}
