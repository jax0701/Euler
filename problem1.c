//If we list all the natural numbers below 10 that are 
//multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

#include <stdio.h>
#include <time.h>

void main(void)
{
     int max_count=1000;
     int index, result=0;
     clock_t start_time, end_time;

     start_time = clock();
     for(index=0; index < max_count; index++){
          if (index % 3 == 0 || index % 5 == 0){
	       result +=index;
	  }
     }
     end_time = clock();
     
     printf("result = %d time=%f\n",result, (double)(end_time-start_time));
}
