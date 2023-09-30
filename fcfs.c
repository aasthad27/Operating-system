#include<stdio.h>
#include<unistd.h>
int main()
{
    int at[5]={0,0,0,0,0};
    int burst[5]={7,2,8,5,4};
    int wait[5]={0,0,0,0,0};
    int tat[5]={0,0,0,0,0};
    int sum_wait_time=0,sum_tat=0;
    float avg_w,avg_tat;
    for(int i=1;i<5;i++)
    {
        wait[i]=wait[i-1]+burst[i-1];
    }
    for(int i=0;i<5;i++)
    {
        tat[i]=wait[i]+burst[i];
        sum_wait_time+=wait[i];
        sum_tat+=tat[i];
    }
    avg_w=sum_wait_time/5.0;
    avg_tat=sum_tat/5.0;
    printf("avg wait time:%f\n avg turn around time %f \n",avg_w,avg_tat);
    return 0;
}