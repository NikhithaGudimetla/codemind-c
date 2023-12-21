#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b,flag=0;
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==b)
            flag=1;
        }
    }
    if(flag==1)
    printf("1");
    else
    printf("0");
}