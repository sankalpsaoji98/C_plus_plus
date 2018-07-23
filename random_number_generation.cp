#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
 
int main () {
   int i,j;
 
   // set the seed
   srand( (unsigned)time( NULL ) );				// due to srand, we get different numbers each time we run the program, else we would have got the same nos.

   /* generate 10  random numbers. */
   for( i = 0; i < 10; i++ ) {
      // generate actual random number
      j = rand();							// using only rand gives us the same random numbers every time we run the program
      cout <<" Random Number : " << j << endl;
   }
   return 0;
}
