#include<stdio.h>
int main()
{
    int n,i,s=0,arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1)
        s=s+arr[i];
    }
    printf("%d",s);
}