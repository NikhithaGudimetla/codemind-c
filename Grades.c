#include<stdio.h>
int main()
{
    int z,y,x,w,v,t,per;
    scanf("%d%d%d%d%d",&z,&y,&x,&w,&v);
    t=z+y+x+w+v;
    per=(t*100)/500;
    if(per>=90)
    {
    printf("Grade A");
    }
    else if(per>=80)
    {
    printf("Grade B");
    }
    else if( per>=70)
    {
    printf("Grade C");
    }
    else if( per>=60)
    {
    printf("Grade D");
    }
    else if( per>=40)
    {
    printf("Grade E");
    }
    else
    printf("Grade F");
    
}