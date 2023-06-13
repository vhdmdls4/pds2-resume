#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void imprimePi(int casas){
  double pi2 = M_PI;
  cout << "O numero pi com " << casas << "casas decimais eh: " << setprecision(casas+1) << pi2 << endl;
}
/*
  # std::in e std::out sao streams de entrada e saida respectivamente
  # mas tambem e possivel usar o printf em c++
  # eh interessante tentar manter apenas so comandos de c++ em c durante a disciplina
  # 
*/
int main(){
  cout << "Com quantas casas decimais de precisao voce quer PI: " << endl;
  int casas_decimais;
  cin >> casas_decimais;

  imprimePi(casas_decimais);
  
  return 0;
}