#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int numeros[SIZE];//Vetor para a entrada
    int negativos = 0;//Contador
  
    for (int i = 0; i < SIZE; ++i)//Laço do tamando SIZE
    {
      std::cin >> numeros[i];

      if(numeros[i] < 0){//Se menor que 0 (negativo)
         ++negativos;    //incrementa +1
       }

    }

    std::cout << negativos;//Saída

    return 0;
}
