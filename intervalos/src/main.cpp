/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

int main(void)
{
    int x;
    int total = 0;
    double z = static_cast<double>(total);
    double intervalo1 = 0;//0 a 24
    double intervalo2 = 0 ;//25 a 49
    double intervalo3 = 0;//50 a 74
    double intervalo4 = 0;//75 a 99
    double foraIntervalo = 0;//100

    //Entrada
    while( cin >> std::ws >> x ) {
    // realização da contagem em relação aos intervalos
      if(x >= 0 && x < 25)
      {
        ++intervalo1;
        ++z;
      }
      if(x > 24 && x < 50)
      {
        ++intervalo2;
        ++z;
      }
      if(x > 49 && x < 75)
      {
        ++intervalo3;
        ++z;
      }
      if(x > 74 && x < 100)
      {
        ++intervalo4;
        ++z;
      }
      if(x > 99 || x < 0)
      {
        ++foraIntervalo;
        ++z;
      }
    }

    //Saída
    std::cout << setprecision(4);
    std::cout << (intervalo1*100)/z << endl;
    std::cout << (intervalo2*100)/z << endl;
    std::cout << (intervalo3*100)/z << endl;
    std::cout << (intervalo4*100)/z << endl;
    std::cout << (foraIntervalo*100)/z << endl;

    return 0;
}
