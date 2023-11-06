#include<stdio.h>
int main()
{
    int  a=1,n,r,fc=0;
    scanf("%d",&n);
    while(a<=n)
    {
        r=n%a;
        if(r==0)
         fc=fc+1;
         a=a+1;
    }
        if(fc==2)
        printf("Prime");
        else
        printf("Not Prime");
        
    
    
}