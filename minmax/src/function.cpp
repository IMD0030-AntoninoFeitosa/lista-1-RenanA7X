#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
    int maior = 0, menor = 0;
    pair <int, int> mM;
  
    for (int i = 0; i < n; ++i)//Comparando cada elemento
    {
      if(V[i] >= V[maior])
      {      
        maior = i;        //Define como maior
      }
      if(V[i] < V[menor])
      {
        menor = i;        //Define como menor
      }
    }
  
    mM = std::make_pair (menor, maior);//Par com o menor e maior

    return mM;
}
