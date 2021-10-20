#include <stdio.h>

int main() { 
   int loop, number;
   int prime = 1;
   
   number = 16;

   for(loop = 2; loop < number/2+1; loop++) {
      if((number % loop) == 0) {
         prime = 0;
      }
   }

   if (prime == 1)
      printf("%d is a prime number.", number);
   else
      printf("%d is a composite number.", number);
   return 0;
}
