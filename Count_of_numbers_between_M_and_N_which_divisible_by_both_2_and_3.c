#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    scanf("%d %d",&a,&b);
    i=a;
    while(i<=b)
    {
        if(i%6==0)
        c++;
        i++;
        
    }
    printf("%d",c);
   
}
