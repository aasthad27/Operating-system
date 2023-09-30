#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    pid_t id=fork();
    if(id>0)
    {
       
        printf("i am going to exit\n");
        exit(0);
    }
    else 
    {
        sleep(1);
        printf("I became orphan , my parent \n");
       
    }
    return 0;
}