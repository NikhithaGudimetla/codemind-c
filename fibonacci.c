#include<stdio.h>
int main()
{
    int i,n,c,d=0,e=1;
    c=d+e;
    scanf("%d",&n);
    printf("%d %d ",d,e);
    for(i=3;i<=n;i++)
    {
        printf("%d ",c);
        c=d+e;
        d=e;
        e=c;
        c=d+e;
         }
    
}