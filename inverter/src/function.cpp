#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    size_t tamanho = arr . size ();//tamanho do vetor
    size_t tamanho1 = arr . size ();//tamanho do vetor
    
    // eu não entendi essa lógica
    
    for(int j = 0; j < tamanho-1; ++j)//Qtd de elementos que trocarão de lugar
    {
      for(int i = 0; i < tamanho1-1; ++i)//Qtd de vezes que cada elemento trocará de lugar
      {
        std::swap(arr[i], arr[i+1]);
      }
      tamanho1--;//Decrementa, a cada ciclo diminui a quantidade de trocas
    }
}
