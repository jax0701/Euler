//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

#include<stdio.h>
#include<time.h>

void main(void){
    unsigned long number= 600851475143;
    unsigned long index, p_index, first;
    clock_t start_time, end_time;

    start_time=clock();
    for(index=2; index<=(number/2); index++){
       for(p_index=2; p_index<=index; p_index++){
	  if (p_index < index && (index % p_index == 0)){
         	  break;}
	  else if (p_index == index) {
                  //printf("prime number = %lu\n", index);
	          if (number%index==0){
		      number = number/index;
		      printf("%lu divided by %lu\n ", number, index);
		  }	  
            }
     	 }
    }
    end_time = clock();
    printf("time:%f\n", (double)(end_time-start_time)/CLOCKS_PER_SEC);
}

