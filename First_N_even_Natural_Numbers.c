#include<stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        s=2*i;
        printf("%d ",s);
    }
}