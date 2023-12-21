#include<stdio.h>
int main()
{
    int a,b,f=0,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        if(arr[i]==b)
        {
        f=1;
        }
    }
    if(f==1)
    {
    printf("True");
    }
    else
    {
    printf("False");
    }
    
}