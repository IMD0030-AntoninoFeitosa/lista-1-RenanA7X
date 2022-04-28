/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m, n, res = 0;
    while (true){
      //Entradas
      std::cin >> m;
      std::cin >> n;

      if(n > 0){//n é maior
        for( int i = m; i < m+n ; ++i ){
          res = res + i;
          }
        }
      if(n < 0){//n é menor
        for( int i = m; i > m+n ; --i ){
          res = res + i;
          }
        }
      if(n==0){//n igual a zero
          res = m;
      }

      //Saída
      std::cout << res << std::endl;
      res = 0;
    }

    return 0;
}
