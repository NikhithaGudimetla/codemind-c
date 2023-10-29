#include<stdio.h>
int main()
{
    int x,y,z;
    float v;
    scanf("%d%d",&x,&y);
    z=y-x;
    v=(z*100.0)/x;
    printf("%.2f",v);
}