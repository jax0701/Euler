/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20? */


#include <stdio.h>
void main(void)
	{  int i,k,j;
	   int result=1;
	   int max = 20;
	   for(i = 2; i < max; i++)
	     {
	         for(j = 2; j < i; j++)
		     {
		         if(i%j == 0){
		          break;
		      }
		}
	        printf("%d:%d\n",i,j);
		
		      if(i == j)
		      {
		         for(k = j; k < max; k = k*j){
		                 result = result * j;
		                 printf("sec insert = %d:%d = %d result : %d\n",i,j,k,result);
		         }
		     }
		   }
   printf("%d\n",result);

}
