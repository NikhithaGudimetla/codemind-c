#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    float v;
    scanf("%d%d%",&x,&y);
    z=x-y;
    v=(z*100.0)/x;
    printf("%.2f",v);
}