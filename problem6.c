/*The sum of the squares of the first ten natural numbers is,
 12 + 22 + ... + 102 = 385
 The square of the sum of the first ten natural numbers is,
 (1 + 2 + ... + 10)2 = 552 = 3025
 Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 ? 385 = 2640.
 Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

#include<stdio.h>

unsigned long calculate(int n){
	unsigned long sum_num;
	unsigned long sqr_sum_num;
	unsigned long sum_sqr;
        unsigned long result;

	sum_num=n*(n+1)/2;
	sqr_sum_num=sum_num*sum_num;
	sum_sqr= n*(n+1)*(2*n+1)*1/6;
        
	printf("Sum of the squares of the first %d numbers: %lu\n", n,sqr_sum_num);
	printf("Square of the sum of the first %d numbers: %lu\n", n, sum_sqr);
	
	result=sqr_sum_num-sum_sqr;
	return result;
}

void main(){
	unsigned long result;
        
	result=calculate(100);

	printf("\n Difference: %lu", result);

}
