#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream in("arq2.txt", fstream::in);
  /*Cria um objeto do tipo ifstream chamado in e abre o arquivo de entrada chamado "arq2.txt". A constante fstream::in é passada como segundo argumento para indicar que o arquivo será aberto para leitura*/
  if (!in.is_open()) // vejo se nao deu erro na abertura, se deu erro retorna 1
  {
    return 1;
  }

  ofstream out("arq1.txt", fstream::out);
  /*Cria um objeto do tipo ofstream chamado out e abre o arquivo de saída chamado "saida.txt". A constante fstream::out é passada como segundo argumento para indicar que o arquivo será aberto para escrita.*/
  if (!out.is_open()) // vejo se nao deu erro na abertura, se deu erro retorna 1
  {
    return 1;
  }

  string line;

  int conta_virgula = 0;

  while (getline(in, line)) // aqui eu pego cada linha do arquivo enquanto houver linha, passamos o arquivo in declarado anteriormente como primeiro parametro, e a variavel para armazenar as linhas como segundo
  {
    size_t virgulaTeste = line.find(",");
    int virgula_teste = line.find(',');

    if (virgulaTeste != string::npos) /*line.find(",") busca a primeira ocorrência da vírgula na string line. A função find() retorna a posição em que a vírgula é encontrada. Se a vírgula não for encontrada, a função retorna string::npos, que é um valor especial indicando que nenhum caractere foi encontrado*/
    {
      conta_virgula++; // virgulaTeste != string::npos verifica se a virgula foi achada na linha, pois, string::npos eh o retorno quando nada foi achado na string
      out << virgula_teste << endl;
      out << virgulaTeste << endl;
      out << conta_virgula << endl;
    }
    if (conta_virgula == 1)
    {
      line = line.substr(0, virgulaTeste);
    }
    if (conta_virgula > 1)
    {
      line = line.substr(0, virgulaTeste + 1);
    }

    out << line << endl;
    // percebi que estava errando o código pq o find me retorna a posição do primeiro elemento achado, logo, conta_virgula não itera direito, assume apenas 1 por linha se houver virgula (F);
  }
  in.close();
  out.close();
  return 0;
}