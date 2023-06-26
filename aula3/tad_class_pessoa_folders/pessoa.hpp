#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <string>

using namespace std;

class pessoa
{

private:
  float peso;
  std::string nacionalidade;
  float altura;

public:
  pessoa(float weight, std::string nation, float height);

  void get_peso();

  void get_nacionalidade();

  void get_altura();
};

#endif