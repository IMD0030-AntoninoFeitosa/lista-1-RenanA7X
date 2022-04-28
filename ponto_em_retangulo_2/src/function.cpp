#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
  location_t res;
  
  //Testa se está no retângulo
  if(P.x >= IE.x && P.x <= SD.x || P.x <= IE.x && P.x >= SD.x)
  {
    if(P.y >= IE.y && P.y <= SD.y || P.y <= IE.y && P.y >= SD.y)
    {
      //Testa se está na borda
      if(P.x == IE.x || P.x == SD.x)
      {
        res = BORDER;
      }
      else if(P.y == IE.y || P.y == SD.y){
        res = BORDER;
      }
      //Caso contrário, dentro do retângulo
      else
      {
        res = INSIDE;  
      }
    }
    else{
      res = OUTSIDE;
    }
  }
  //Caso contrário, fora do retângulo
  else{
    res = OUTSIDE;
  }

    return res;
}
