#include <stdio.h>

void print_all_the_prime_number(int limit){

  if( limit < 2 ) {
    printf("There is no prime between %d", limit);
    return;
  }


  for(int i = 2; i <= limit; i++){
   int isPrime = 1;
   for(int j = 2; j < i; j++){
     if( i % j == 0) {
       isPrime = 0;
       break;
     }
   }

   if(isPrime) printf("%d \t", i);
   
  }

  
}


int main(void) {
  print_all_the_prime_number(100);
  return 0;
:wq
}
