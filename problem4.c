/* A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 * 99
Find the largest palindrome made from the product of two 3-digit numbers. */

#include<stdio.h>
#include<time.h>

int check_pal(int a){
        int b, c=0, temp;
	temp = a; 
	while(a>0){
	    b = a % 10;
	    c = c*10 + b;
	    a = a/10; 
	}
	if (temp == c){
	   return 1;
	}
	else {
	   return 0;
	}
}

void main(void){
	int index1, index2, multip, k, max=0;
        clock_t start_time, end_time;
	start_time=clock();
	for(index1=100; index1<=999; index1++){
		for(index2=100; index2<=999; index2++){
			multip=index1*index2;
			k=check_pal(multip);
			if(k==1 && multip>max){
				max=multip;
				printf("%d * %d = %d\n", index1, index2, multip);
							
			}

		}
	}
	end_time = clock();
	printf("time:%f\n",(double)(end_time-start_time)/CLOCKS_PER_SEC);
}
