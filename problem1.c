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
