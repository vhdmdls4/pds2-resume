#include <iostream>
/*
struct ponto_t
{
  float x;
  float y;
};
void translacao(ponto_t &ponto, float dx,
                float dy)
{
  ponto.x += dx;
  ponto.y += dy;
}
int main()
{
  ponto_t ponto_a;
  ponto_a.x = 7;
  ponto_a.y = 9;
  translacao(ponto_a, 3, 1);
  std::cout << ponto_a.x << std::endl;
  std::cout << ponto_a.y << std::endl;
  return 0;
}
*/

// base acima

using namespace std;

struct chute
{
  float potencia;
  float angulo;
  float precisao;
  float vento;
};

void ventania_atrapalha_chute(chute &chute_jogador)
{
  chute_jogador.precisao = chute_jogador.angulo * chute_jogador.potencia * chute_jogador.vento;
}

void verifica_precisao(float precisao_do_chute)
{
  if (precisao_do_chute > 2200 && precisao_do_chute <= 5000)
  {
    cout << "ANKARA MESSI, ANKARA MESSI, ANKARA MESSI" << endl;
  }
  else
  {
    cout << "Bandeirantes, o canal do esporte" << endl;
  }
}

int main()
{

  chute chute_1, chute_2;

  chute_1.angulo = 50;
  chute_1.potencia = 10;
  chute_1.vento = 8;

  chute_2.angulo = 10.7;
  chute_2.potencia = 14.2;
  chute_2.vento = 2.36;

  ventania_atrapalha_chute(chute_1);

  ventania_atrapalha_chute(chute_2);

  verifica_precisao(chute_1.precisao);

  verifica_precisao(chute_2.precisao);

  return 0;
}