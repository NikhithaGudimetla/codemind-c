#include<stdio.h>
int main()
{
    int x,y,sum=0,tum=0,i,j;
    scanf("%d %d",&x,&y);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        sum=sum+i;
    }
    for(j=1;j<y;j++)
    {
        if(y%j==0)
        tum=tum+j;
    }
    if(x==tum && y==sum )
    printf("Amicable");
    else
    printf("Not Amicable");
}