#include<stdio.h>
int main()
{
int n,h[20],i,sum=0,k=0,j=0,avg;
while(scanf("%d",&n)==1)
{if(n==0)
        break;
    j++;
    for ( i=0;i<n;i++){
scanf("%d",&h[i]);
sum+=h[i];}
avg=sum/n;
for (i=0;i<n;i++)
{

if (h[i]>avg){
    k+=h[i]-avg;
    }}

    printf("Set #%d\n",j);
    printf("The minimum number of moves is %d.\n", k);}
    return 0;}
