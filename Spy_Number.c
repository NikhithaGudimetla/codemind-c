#include<stdio.h>
int main()
{
    int n,t=0,s=1,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s*r;
        t=t+r;
        n=n/10;
    }
    if(t==s)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}