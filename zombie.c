#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    pid_t id=fork();
    if(id>0)
    {
        sleep(1);
        printf("i will not wait for my child\n");
    }
    else 
    {
        printf("MY PARENT DOESN'T WAITED FOR ME I BECAME ZOMBIE \n");
        exit(0);
    }
    return 0;
}