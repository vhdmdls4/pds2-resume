#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string palavra = "morar";
  int tam = palavra.size();
  int letraIgual = 0;

  for (int i = 0; i < tam - 1; i++)
  {
    for (int j = 0; j < tam - i - 1; j++)
    {
      if (palavra[j] > palavra[j + 1])
      {
        char temp = palavra[j];
        palavra[j] = palavra[j + 1];
        palavra[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < palavra.size(); i++)
  {
    for (int j = i + 1; j < palavra.size(); j++)
    {
      if (palavra[i] == palavra[j])
      {
        letraIgual++;
      }
    }
    cout << palavra[i] << " " << letraIgual << endl;
    letraIgual = 0;
  }
}

/*
VPL 01 - Contagem de Letras

O objetivo desse VPL é praticar os comandos de entrada e saída específicos de C++ (cin, cout)
e também a utilização do tipo string. Não utilize outros comando de entrada como o getline.

Escreva um programa que lê como entrada apenas uma palavra.
Em seguida, seu programa deve contar o número de ocorrências
de cada letra presente na palavra. Por fim, deve-se imprimir a
quantidade de vezes que uma determinada letra apareceu.
Se uma letra não aparece na palavra, ela não deve ser impressa.
Imprima as letras em ordem alfabética.

Para facilitar, você pode assumir que as palavras sempre terão
todas as letras minúsculas. Considere que os caracteres válidos
são os presentes no intervalo “a” a “z”.

Exemplos de entrada e saída:

input =
estudantes

output =
a 1
d 1
e 2
n 1
s 2
t 2
u 1

input =
abacaxi
output =
a 3
b 1
c 1
i 1
x 1

Dicas:

Dica 1:
Teste o arquivo localmente. Para isso, sugerimos utilizar o seguinte comando: ./executavel < entrada.txt
O arquivo entrada.txt possui a palavra a ser utilizada como entrada.

Dica 2:
Utilize operações entre caracteres para facilitar. Exemplo:
char caractere = 'c'
int indice = caractere - 'a'
O valor da variável índice será 2.

Referências:
https://www.cplusplus.com/doc/tutorial/basic_io/
https://www.cplusplus.com/reference/string/string/ */