#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    vector<unsigned int> fibo {};
    int n1 = 1, n2 = 1;
    int fib = 0;

    //Adiciona para o fim do vetor
    fibo.push_back(n1);
    fibo.push_back(n2);
  
    while(1)
    {
      fib = n1 + n2;//Soma
      if(fib < n)
      {
        fibo.push_back(fib);//Adiciona para o fim do vetor
      }
      else
      {
        break;
      }
      //Repassando valores
      n1 = n2;
      n2 = fib;
    }

    return fibo;
}
