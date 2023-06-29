#include <iostream>
#include "matriz.h"

using namespace std;

int main(void)
{
  Matriz m1(2, 2);
  Matriz m2(2, 2);

  cout << m1.valor(0, 0) << endl;
  cout << m2.valor(0, 0) << endl;

  m1.seta(0, 0, 1);
  cout << m1.valor(0, 0) << endl;

  m2.seta(0, 0, 2);
  cout << m2.valor(0, 0) << endl;

  Matriz m3 = m1.soma(m2);

  cout << m3.valor(0, 0) << endl;
}