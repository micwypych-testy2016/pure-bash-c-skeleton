#include <stdio.h>
#include <stdlib.h>

char *fizz_buzz(int value) 
{
    if (value % 3 != 0 && value % 5 != 0) 
    {
        int buff_size = snprintf(NULL,0,"%d",value);
        char *buff = (char*)malloc(buff_size+1);
        sprintf(buff,"%d",value);
        return buff;
    }
    if (value % 3 == 0) 
    {
        int buff_size = snprintf(NULL,0,"%s","Fizz");
        char *buff = (char*)malloc(buff_size+1);
        sprintf(buff,"%s","Fizz");
        return buff;
    }
    if (value % 5 == 0) 
    {
        int buff_size = snprintf(NULL,0,"%s","Buzz");
        char *buff = (char*)malloc(buff_size+1);
        sprintf(buff,"%s","Buzz");
        return buff;   
    }
    else 
    {
	int buff_size = snprintf(NULL,0,"%s","FizzBuzz");
        char *buff = (char*)malloc(buff_size+1);
        sprintf(buff,"%s","FizzBuzz");
        return buff;
     
    }
}
