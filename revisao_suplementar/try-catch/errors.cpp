#include <iostream>
#include <stdexcept>
#include <fstream>

using namespace std;

class MyException : public std::exception
{
public:
  const char *what() const throw()
  {
    return "Minha exceção que eu mesmo fiz";
  }
};

int compare(int a, int b)
{
  if ((a == 256 && b == 128) || (!a || !b))
  {
    throw std::range_error("olha esse");
  }
  if (a < 0 || b < 0)
  {
    throw MyException();
  }
  if ((a > 100 && b > 100) && (b < 1000000))
  {
    throw std::out_of_range("to much higher number");
  }
  if (a == 0 || b == 0)
  {
    throw std::runtime_error("testando erros diferentes");
  }
  if (a > 10000000 || b > 1000000)
  {
    throw std::length_error("ce ta maluco");
  }
}

int main()
{
  std::ofstream logArq("error.log", std::ios::app);
  /*

  Bloco try-catch: O bloco try-catch é utilizado para envolver o código que pode lançar uma exceção. O bloco try contém o código que você deseja monitorar em busca de exceções, enquanto o bloco catch é usado para capturar e tratar essas exceções.

  Quando uma exceção é lançada, o fluxo de execução do programa sai imediatamente do bloco try atual e procura por um bloco catch correspondente para tratar a exceção.

  */

  try
  {
    // compare(-1, 1);
    // compare(1, -2);
    // compare(0, 0);
    // compare(100, 100);
    // compare(101, 50);
    // compare(30, 100000000);
    compare(-1, -1);
  }
  catch (std::runtime_error &e)
  {
    logArq << "Erro anotado no log: " << e.what() << endl;
    cerr << "ERRO: " << e.what() << endl;
    throw e;
  }
  catch (std::out_of_range &e)
  {
    logArq << "Erro anotado no log: " << e.what() << endl;
    cerr << "ERRO: " << e.what() << endl;
    throw e;
  }
  catch (std::invalid_argument &e)
  {
    logArq << "Erro anotado no log: " << e.what() << endl;
    cerr << "ERRO: " << e.what() << endl;
    throw e;
  }
  catch (std::length_error &e)
  {
    logArq << "Erro anotado no log: " << e.what() << endl;
    cerr << "Erro " << e.what() << endl;
    throw e;
  }
  // catch (...)
  // {
  //   cerr << "Exceção desconhecida capturada" << endl;
  // }
  catch (MyException &e)
  {
    cerr << "Exceção desconhecida capturada. " << e.what() << ". Demais!" << endl;
  }

  logArq.close();

  return 0;
}