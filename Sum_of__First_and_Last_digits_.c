#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    s+=n%10;
    while(n>0)
    {
        r=n%10;
        n=n/10;
    }
    s+=r;
    printf("%d",s);
}