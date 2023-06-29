#include <iostream>
#include <string>
#include <vector>

using namespace std;

void add10(int *n)
{
  *n += 10;
}
bool compare_end(int *num1, int *num2)
{
  return num1 == num2;
}
bool compare_val(int *num1, int *num2)
{
  return *num1 == *num2;
}
char *cast_TO_char(int *n)
{
  // char *c = (char*) n; // c-cast style or:
  char *c = reinterpret_cast<char *>(n);
  return c;
}
void print_char(char *n)
{
  for (int i = 0; n[i] != '\0'; i++)
  {
    cout << n[i];
  }
  cout << endl;
}
void print_string(string &str)
{
  cout << str << endl;
}

void concatenar_string(string &begin, string end)
{
  begin = begin + end;
}

void aloca_array(int **arr)
{
  vector<int> array_alocado(10);
  for (int i : array_alocado)
  {
    array_alocado[i] = i;
  }
}

int main()
{
  int num1 = 10, num2 = 20, num3 = 10;
  int num4 = 'a';

  add10(&num1);
  cout << num1 << endl;
  cout << compare_end(&num1, &num2) << endl;
  cout << compare_val(&num1, &num2) << endl;
  cout << compare_end(&num1, &num3) << endl;
  cout << compare_val(&num1, &num2) << endl;
  char *c = cast_TO_char(&num4);
  printf("%c\n", c[0]);

  char text[21] = "PDS II is the best!\0";
  print_char(text);

  string text2 = "PDS II is great!";
  print_string(text2);

  concatenar_string(text2, " It is really nice! =D");
  print_string(text2);

  return 0;
}