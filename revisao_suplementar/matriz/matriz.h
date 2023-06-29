#ifndef PDS2_MATRIZ_H
#define PDS2_MATRIZ_H

struct Matriz
{
  int **dados;
  int n_linhas;
  int n_colunas;

  // construtor:
  Matriz(int n_linhas, int n_colunas);

  // destrutor:
  ~Matriz();

  // metodos:
  void seta(int i, int j, int v);

  int valor(int i, int j);

  Matriz soma(Matriz &outra);
};

#endif