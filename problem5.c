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
