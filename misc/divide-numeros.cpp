#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  int i = 0;
  int numberMax;
  std::cout << "Digite o valor máximo: ";
  std::cin >> numberMax;

  for (i = 1; i <= numberMax; i++)
  {
    std::cout << "conto " << i << " antes era " << i - 1 << std::endl;
    std::cout << "teste" << std::endl;
  }

  std::string hello = "ok ok";
  // para colocar quebra de linha você pode passar ao final da linha do cout um << endl; ou:
  std::cout << std::endl;
  std::string hello2 = "ok ok";
  std::cout << "Tamanho de hello: " << hello.size() << std::endl;
  std::cout << "Comparação entre hello e hello2: " << hello.compare(hello2) << std::endl;

  // double num1 = 0.0;
  // double num2 = 0.0;
  // std::cout << "Digite o primeiro número: ";
  // std::cin >> num1;
  // std::cout << "Digite o segundo número: ";
  // std::cin >> num2;
  // std::cout << "A divisão de " << num1 << " e " << num2 << " é " << std::setprecision(2) << (num1 / num2) << ".\n";
  // return 0;
}
