#include <stdio.h>
#include <stdbool.h>


bool is_prime(int number){

  if( number < 2 ) return false;

  for(int i = 2; i < number; i++){
    if( number % i == 0 ) return false;
  }

  return true;
}







int main(void) {
  if( is_prime(11) ) printf("number is prime");
  else printf("number is not prime");
  return 0;
}

