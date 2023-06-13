#include <iostream>
#include <string>

using namespace std;

int main()
{
  string hello("Hello world!");
  cout << hello << endl;

  string outra = "Teste com igual";

  string frase;
  string frase_pronta = "Testando essa aqui de varios";

  // cin >> frase; nesse caso CIN pega apenas a primeira expressao ate o espaco, nesse caso, a primeira palavra ou numero que eu colocar no cin;
  // getline pega a linha inteira de cin e armazena em frase;

  getline(cin, frase);

  cout << frase_pronta << endl;

  cout << frase_pronta.size() << endl;

  cout << frase.size() << endl;

  cout << frase << endl;

  /*eh possivel comparar string em c++ porque ele faz o overload de == para string dessa forma:

  std::string hello("Olá mundo!\n");
  std::string hello2("Olá mundo!\n");

  if (hello == hello2) {
    std::cout << "c++ faz overload do == para strings!!!!.\n";
  }
  if (hello.compare(hello2) == 0) {
    std::cout << "Strings iguais.\n";
  }

  */

  return 0;
}