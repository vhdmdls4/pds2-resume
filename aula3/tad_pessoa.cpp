#include <iostream>

using namespace std;

struct pessoa
{
  float p;
  string n;
  float h;

  pessoa(float p, std::string n, float h)
  {
    this->p = p;
    this->n = n;
    this->h = h;
  }

  void get_peso()
  {
    std::cout << this->p << std::endl;
  }

  void get_gentilico()
  {
    std::cout << this->n << std::endl;
  }

  void get_altura()
  {
    std::cout << this->h << std::endl;
  }
};

int main()
{
  pessoa p1(45, "altamirense", 1.89);

  p1.get_peso();

  p1.get_altura();

  p1.get_gentilico();

  return 0;
}
