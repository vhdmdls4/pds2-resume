# Armazenamento de dados na memória

# Organização da Memória em um Programa e Uso de Ponteiros em C++

O compilador desempenha um papel importante na organização e alocação de memória para um programa durante a compilação e execução.
Abaixo está um resumo estruturado de como o compilador lida com um programa e o divide em diferentes regiões de memória, como heap, stack, código e variáveis globais.
Também será explicado como as variáveis são alocadas nessas regiões e como o acesso a elas ocorre durante a compilação e execução do programa.

## Código

- O compilador processa o código-fonte e gera o código de máquina correspondente.
- O código de máquina é armazenado em uma região específica da memória conhecida como seção de código.
- Essa seção contém as instruções que serão executadas pelo processador.

Código-fonte => Código de máquina => Execução pelo processador

## Variáveis Globais

- Variáveis globais são declaradas fora de qualquer função e têm escopo global.
- Elas são alocadas em uma região de memória conhecida como seção de dados globais.
- Essas variáveis são inicializadas antes do início da execução do programa e permanecem na memória durante toda a sua execução.
- Os ponteiros para essas variáveis globais podem ser usados para acessá-las em qualquer parte do programa.

## Stack (Pilha)

- A stack é uma região de memória usada para armazenar informações relacionadas a funções.
- Quando uma função é chamada, um espaço é alocado na stack para armazenar suas variáveis locais e outros dados relacionados.
- À medida que as funções são chamadas e retornam, o espaço correspondente na stack é liberado.
- O acesso às variáveis na stack é relativamente rápido devido à sua organização em pilha.

## Heap

- O heap é uma região de memória usada para armazenar dados alocados dinamicamente durante a execução do programa.
- Variáveis no heap são alocadas e liberadas explicitamente pelo programador usando funções como `malloc` e `free` em C++.
- As variáveis no heap têm tempo de vida além do escopo da função que as alocou.
- O acesso às variáveis no heap geralmente é feito por meio de ponteiros.

- O uso de ponteiros em C++ está relacionado à gestão da memória e permite o acesso indireto a variáveis, bem como a alocação de memória dinâmica no heap. Os ponteiros podem ser usados para manipular variáveis em qualquer região de memória (heap, stack ou globais) e são especialmente úteis para trabalhar com estruturas de dados complexas, como listas encadeadas, árvores e objetos alocados dinamicamente.

- Em resumo, o compilador lida com um programa dividindo-o em diferentes regiões de memória, como heap, stack, código e variáveis globais. As variáveis são alocadas em regiões específicas, dependendo de seu escopo e tempo de vida. O uso de ponteiros em C++ permite acessar e manipular variáveis em diferentes regiões de memória, facilitando a gestão dinâmica da memória e o trabalho com estruturas de dados complexas.