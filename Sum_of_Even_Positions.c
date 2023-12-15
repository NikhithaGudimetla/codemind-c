#include<stdio.h>
int main()
{
    int n,i,arr[n],s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
        s=s+arr[i];
    }
    printf("%d",s);
}