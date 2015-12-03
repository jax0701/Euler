#include <stdio.h>
#include <math.h>
#include <time.h>

void main(void)
  {
    unsigned long index = 600851475143; 
    unsigned long count=index, tmp=0;
    unsigned long min, result;
    unsigned long value;

    /* ?????
     * 2?? index?? loop? ??? index? min?? ?? ????
     * 0? min?? index? ???? index? ?????.
     */
    clock_t start_time, end_time;
    start_time = clock();
    for(min = 2;min < index; min++){
        if(index % min ==0){
            index = index / min;
            //printf("%lu %lu\n",min, index);
            printf("min : %lu index : %lu\n",min,index);
        }
    }
    end_time = clock();
    printf("index:%lu time:%f\n",index,(double)(end_time-start_time)/CLOCKS_PER_SEC);
}
