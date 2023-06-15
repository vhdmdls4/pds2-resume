#include <iostream>

using namespace std;

int any_function(int *f)
{
  *f = *f + 3;
  return *f;
}

int main()
{
  int x = 7;

  int y;

  int *z;

  y = any_function(&x);

  /*
  Quando usamos &x, estamos passando o endereço de memória
  da variável x para a função any_function(). Isso significa
  que a função terá acesso direto à localização de memória onde
  a variável x está armazenada. Ao receber o endereço de memória,
  a função any_function() pode modificar o valor de x ou realizar
  operações sobre ele de forma eficiente, evitando a necessidade
  de copiar o valor inteiro de x na chamada da função.*/

  *z = x;

  cout << x << endl;

  cout << y << endl;

  cout << z << endl;

  x++;
  y--;

  cout << "depois da manipulasao" << endl;

  z = &x;

  /*
  Logo, percebemos que uma declaração int *valor_do_ponteiro = &valor;
  é em termos práticos, igual a uma passagem por referência:
  int &valor_do_ponteiro_por_referencia = &valor;
  isso soh e possivel em c++
  em termos de boas praticas:
    - ao alocar memoria no heap, use *, usando malloc em c ou new em c++ para alocar a memoria para esse ponteiro;
    - ao alocar memoria no stack (nas funcoes), use passagem por referência jah que e imutavel e evita bugs;

    lembre-se:

    int inc(int &x) {
      x++;
      return x;
    }

    int main() {
      int a = 10;
      int b = inc(a);
    }

    nesse caso, nao precisou do &a porque na funcao jah esta declarado como referencia, jah torna o a automaticamente passado por referencia
    caso fosse feito a funcao int inc (int *x) com ponteiro, ai precisaria passar com &a;
  */

  cout << x << endl;

  cout << y << endl;

  cout << z << endl;

  return 0;
}