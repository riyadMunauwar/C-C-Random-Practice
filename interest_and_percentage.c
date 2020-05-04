#include <stdio.h>


float interest_counter(int total, int part, int percent){

  if(!total) return (float) ( part * 100 ) / percent;
  if( !part ) return (float) ( percent * total ) / 100;
  if( !percent ) return (float) ( part *  100 ) / total;

 return 0;
}


int main(void) {


float res = interest_counter(1000, 0,50);

if( res ) printf("%f", res);




  return 0;
}
