#include<stdio.h>
int main()
{
    int i,n,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            if(i%2==0)
            f=1;
            else
            f=0;
            
        }
    }
    if(f==1)
    printf("True");
    else
    
    printf("False");
}

