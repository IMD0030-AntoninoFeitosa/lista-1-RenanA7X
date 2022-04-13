/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

string returnString(int status)
{
  string str;
  //Testa retorno e define o status em string
  if(status == 0)
  {
    str = "inside";
  }
  if(status == 1)
  {
    str = "border";
  }
  if(status == 2)
  {
    str = "outside";
  }
 
  return str;
}

int main(void)
{
  enum location_t : int { INSIDE =0, BORDER =1, OUTSIDE =2 };
  Ponto R1, R2, P;
  
  int status; 
  string strStatus;
  while(true)
  {
    //Entrada
    std::cin >> R1.x >> R1.y;//Ponto esquerda, baixo do retângulo
    std::cin >> R2.x >> R2.y;//Ponto direita, cima do retângulo
    std::cin >> P.x >> P.y;  //Ponto a ser testado

    //Testa se é válido
    if(R1.x == R2.x && R1.y == R2.y)
    {
      strStatus = "invalid";
    }
    //Caso contrário, é válido
    else
    {
      //Chamada de função
      status = pt_in_rect( R1, R2, P );
    
      //Chamada de função
      strStatus = returnString(status);
    }
    //Saída
    std::cout << strStatus << std::endl;    
  }

    return 0;
}
