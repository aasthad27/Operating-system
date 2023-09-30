#include<stdio.h>
#include<conio.h>
#include<unistd.h>
int main()
{
  int n,i,bt[10],wt[10],sq=0,rt[10],tat[10],temp,qt,count =0;
  float awt=0,atat=0;
  printf("enter the num of process\n");
  scanf("%d",&n);
  printf("enter burst time of process\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&bt[i]);
    rt[i]=bt[i];
  }
  printf("enter quantum time \n");
  scanf("%d",&qt);
  while(1)
  {
 for(i=0,count=0;i<n;i++)
 {
    temp=qt;
    if(rt[i]==0)
    {
        count++;
        continue;
    }
    if(rt[i]>qt)
    {
        rt[i]=rt[i]-qt;

    }
    else if(rt[i]>=0)
    {
        temp=rt[i];
        rt[i]=0;
    }
    sq=sq+temp;
    tat[i]=sq;
       
 }
 if(count==n)
 break;

}
printf("\nprocess number \t burst time \t waiting time \t tat\t\n");
for(i=0;i<n;i++)
{
    wt[i]=tat[i]-bt[i];
    awt+=wt[i];
    atat+=tat[i];
    printf("\n%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);

}
awt=awt/n;
atat=atat/n;
printf("avg waiting time %f\n avg tat time %f \n",awt,atat);
}


