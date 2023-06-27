#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

void imprime_algo(std::string frase_a_imprimir)
{
  std::cout << frase_a_imprimir << std::endl;
}

int main()
{

  // integers
  // O tipo int é usado para representar números inteiros. Ele normalmente ocupa 4 bytes de memória (pode variar dependendo da plataforma) e pode armazenar valores inteiros na faixa de -2.147.483.648 a 2.147.483.647
  int number = 1;
  int dec_as_int = 1.25;
  int int_null = NULL;
  int int_true = true;

  // decimals
  float number_dec = 2.413556412515125165124135562;
  float int_as_dec = 5;

  // large decimals
  double number_lg_dec = 2.4135562313123213;
  double int_as_lg_dec = 5;
  // numero realmente impresso no cout de number_lg_dec eh: 2.4135562313123211; o último dígito não é preciso devido ao tamanho ser maior que 15 dígitos que é a precisão máxima do double, ele imprime, mas não é preciso;

  std::cout << "number: " << number << std::endl;
  std::cout << "dec_as_int: " << dec_as_int << std::endl;
  std::cout << "int_null: " << int_null << std::endl;
  std::cout << "int_true: " << int_true << std::endl;

  std::cout << std::endl;

  // essas duas linhas faz com que seja fixada a precisão da saída de cout para o tamanho do double number_lg_dec convertido em string
  // na verdade acredito que o máximo possível pelo to_string seja 8 segundo o retorno desse código, a melhor arredondamento de um número double permitido pela limitação de caracteres de to_string() é esse;
  std::cout << std::fixed << std::setprecision(50);
  int precision_size = to_string(number_lg_dec).size();
  std::cout << std::to_string(number_lg_dec) << std::endl;
  std::cout << precision_size << std::endl;
  std::cout << std::fixed << std::setprecision(precision_size);

  std::cout << "number_dec: " << number_dec << std::endl;
  std::cout << "int_as_dec: " << int_as_dec << std::endl;

  std::cout << std::endl;

  std::cout << "number_lg_dec: " << number_lg_dec << std::endl;
  std::cout << "int_as_lg_dec: " << int_as_lg_dec << std::endl;

  std::cout << std::endl;
  std::cout << std::endl;

  //  char
  //  O tipo char é usado para representar caracteres individuais. Ele ocupa 1 byte de memória e pode armazenar um único caractere. Se você tentar atribuir um char a uma variável do tipo int, o valor do caractere será convertido para o valor ASCII correspondente. Portanto, se você imprimir um char como um inteiro, ele exibirá o valor numérico correspondente na tabela ASCII.
  char character = 'B';

  int asciiValue = static_cast<int>(character);

  asciiValue++;

  cout << character << endl;

  cout << asciiValue << endl;

  char character_mod = static_cast<int>(asciiValue);

  cout << character_mod << endl;

  // teste cast s/ cast amora em uva
  // std::string p_amora = "amora";
  // std::vector<char> amora_vector(p_amora.begin(), p_amora.end());
  // std::string p_uva("uva");
  // std::vector<char> uva_vector(p_uva.begin(), p_uva.end());

  // for (char c : amora_vector)
  // {
  //   std::cout << c;
  // }

  // std::cout << std::endl;

  // amora_vector[0] = 'u';
  // amora_vector[1] = 'v';
  // amora_vector[2] = 'a';
  // amora_vector.resize(3);

  // std::cout << "Agora eh " << p_uva << ", olha: " << std::endl;

  // for (char c : amora_vector)
  // {
  //   std::cout << c;
  // }

  // std::cout << std::endl;

  // uva_vector.resize(7);

  // uva_vector[0] = 'm';
  // uva_vector[1] = 'o';
  // uva_vector[2] = 'r';
  // uva_vector[3] = 'a';
  // uva_vector[4] = 'n';
  // uva_vector[5] = 'g';
  // uva_vector[6] = 'o';

  // std::cout << "E " << p_uva << " agora eh morango: ";

  // for (char c : uva_vector)
  // {
  //   std::cout << c;
  // }

  // std::cout << std::endl;

  // boolean = O tipo bool representa valores lógicos e pode ter apenas dois valores: true (true) ou false (false);
  bool truest = true;
  bool faker = false;
  bool test_2 = 2;
  bool test_0 = 0;
  bool test_a = "a";

  // void = O tipo void indica a ausência de tipo. É usado para indicar que uma função não retorna um valor ou que um ponteiro não tem tipo específico. é necessário declarar a função fora da função main aparentemente, aí não sei se o problema é o vs_code ou é o próprio c, ou talvez intellisense

  imprime_algo("teste aqui");

  /*

  sobre memória e tipos: Esses são os tipos primitivos básicos em C++. Agora, vamos discutir a memória utilizada por cada tipo:

  -- bool: Normalmente, um bool ocupa 1 byte de memória, embora apenas 1 bit seja suficiente para armazenar o valor verdadeiro ou falso. Os compiladores geralmente alocam 1 byte para cada variável bool para atender aos requisitos de alinhamento e acesso eficiente à memória.

  -- char: Um char ocupa 1 byte de memória. Ele é usado para representar caracteres individuais e é suficiente para armazenar um único caractere da tabela ASCII.

  -- int: Um int geralmente ocupa 4 bytes de memória (32 bits). No entanto, o tamanho real pode variar dependendo da plataforma e do compilador. O intervalo de valores que um int pode armazenar é determinado pela implementação.

  -- float: Um float ocupa 4 bytes de memória e é usado para armazenar números de ponto flutuante de precisão simples.

  -- double: Um double normalmente ocupa 8 bytes de memória (64 bits) e é usado para armazenar números de ponto flutuante de dupla precisão.


  sobre conversão de tipo:

  -- Conversão de tipo usando dynamic_cast:
    * O operador dynamic_cast é usado para converter ponteiros/polimorfismo para tipos relacionados em tempo de execução. Ele pode ser usado para converter um ponteiro de uma classe base para um ponteiro de uma classe derivada (downcasting) ou para converter um ponteiro de uma classe derivada para um ponteiro de uma classe base (upcasting) se a hierarquia de classes for polimórfica.

    * Nesse exemplo, um ponteiro basePtr de tipo Base é convertido para um ponteiro derivedPtr de tipo Derived usando dynamic_cast. É necessário que a classe base tenha pelo menos uma função virtual para que a conversão seja bem-sucedida.

  class Base {
  public:
      virtual ~Base() {}
  };

  class Derived : public Base {
  public:
      void derivedMethod() {}
  };

  int main() {
    Base* basePtr = new Derived();

    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        // Conversão bem-sucedida
        derivedPtr->derivedMethod();
    }

    delete basePtr;
    return 0;
  }

  -- Conversão de tipo usando dynamic_cast:
    * Em alguns casos, é possível realizar conversões de tipo sem usar dynamic_cast. Por exemplo, você pode usar static_cast para converter explicitamente um tipo para outro se houver uma conversão válida entre eles. No entanto, é importante ter cuidado ao usar static_cast, pois ele não faz verificação em tempo de execução como dynamic_cast.

    int num = 10;
    double doubleNum = static_cast<double>(num);


  */

  // std::string
  //  O tipo std::string é usado para representar sequências de caracteres em C++. Ele é definido na biblioteca <string> e fornece uma série de funções e operações para manipulação de strings. O std::string é um tipo não primitivo e encapsula a lógica de gerenciamento de memória e manipulação de strings. Para utilizar std::string, você precisa incluir a biblioteca <string> no seu código. */

  std::string str = "Hello, world!";

  std::string str2("Olha esse outro metodo...");
  std::string str3(" nao eh legal?");
  std::string str1("olha isso aqui oh: ");

  std::string str4 = str2 + str3;

  str1.append(" teste ").append(str3);

  std::cout << str1 << endl;

  std::cout << str4 << endl;

  // Concatenação de strings
  str += " Welcome!";

  // Tamanho da string
  std::cout << "Tamanho da string: " << str.size() << std::endl;

  // Acesso aos caracteres individuais
  char firstChar = str[0];

  // Substring
  std::string sub = str.substr(7, 5); // Obtém a substring "world"
  // metodo substr recebe a posicao do primeiro char da string e a quantidade de chars a partir dele
  std::string sub_teste = str.substr(7, 0);

  std::cout << sub << endl;

  std::cout << sub_teste << endl;

  // Encontrar uma substring; fora que size_t representa o maior tamanho possível que a variável pode ter, geralmente você verá ela associada a métodos de string;
  size_t pos = str.find("welcome");
  if (pos != std::string::npos)
  {
    std::cout << "Substring encontrada na posição: " << pos << std::endl;
  }

  std::string sentence = "O rato roeu a roupa do rei de Roma.";

  // Procura a palavra "rei" na string
  size_t pos = sentence.find("rei");

  if (pos != std::string::npos)
  {
    std::cout << "Palavra encontrada na posição: " << pos << std::endl;
  }
  else
  {
    std::cout << "Palavra não encontrada." << std::endl;
  }

  // npos = std::string::npos é um valor estático da classe std::string em C++. Ele é usado para representar uma posição inválida ou inexistente em uma string. O valor de std::string::npos é geralmente definido como -1 ou um valor máximo especial que indica a ausência de uma posição válida. std::string::npos é comumente usado em operações de pesquisa em strings, como find() ou rfind(), para indicar que o caractere ou a substring procurada não foi encontrada na string. Quando uma função de pesquisa não encontra o caractere ou a substring especificada, ela retorna std::string::npos como resultado para indicar a ausência do item procurado. A vantagem de usar std::string::npos é que ele evita a necessidade de um valor mágico arbitrário para representar a ausência de uma posição válida. Em vez disso, você pode comparar o resultado de uma função de pesquisa com std::string::npos para determinar se a busca foi bem-sucedida ou não.

  // Imprimir a string
  std::cout << str << std::endl;

  return 0;
}