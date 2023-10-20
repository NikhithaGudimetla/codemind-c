#include<stdio.h>
int main()
{
    int sal;
    float da,hra,gross;
    scanf("%d",&sal);
    if(sal<=10000)
    {
        da=(0.80)*sal;
        hra=(0.20)*sal;
    }
    else if(sal<=20000)
    {
        da=(0.90)*sal;
        hra=(0.25)*sal;
        
    }
    else
    {
        da=(0.95)*sal;
        hra=(0.30)*sal;
    }
    gross=sal+da+hra;
    printf("%.2f",gross);
}