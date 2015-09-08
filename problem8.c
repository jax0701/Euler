#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define MAX 1000

void main(void)
{       
	int fd;
	char buf[MAX];
	char tmp_buf[2];

	fd=open("8.txt",O_RDONLY);

	read(fd, buf, MAX);

        int i,count=0;
        unsigned long top_num=0;
        unsigned long result;
        int num;
        
	while(count<=1000){
	        result = 1;
	        for(i = 0; i<13; i++){
	            tmp_buf[0] = buf[i+count];
                    num = atoi(tmp_buf);
	            if(!num){
	                    break;
	                }
	            result = result*atoi(tmp_buf);
	        }
	        if(top_num < result){
		            top_num = result;
	        }
	        count++;
	}

       printf("%d:top_num : %lu %lu\n ",count, top_num, result);
       
       close(fd);

}
