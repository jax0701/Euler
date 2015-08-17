//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.


#include <stdio.h>

void main(void)
{
     int max_count=200;
     int index, result;

     for(index=0; index < max_count; index++){
          if (index % 3 == 0 || index % 5 == 0){
	       result +=index;
	  }
     }
     printf("result = %d\n",result);
}
