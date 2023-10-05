#include <stdio.h>
#include <math.h>
void main()
{
    float x1,x2,y1,y2,x,y,d;
    printf("enter four numbers\n");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    x=x2-x1;
    y=y2-y1;
    d=sqrt(pow(x,2)+ pow(y,2));
    printf("the distance is : %f",d);
}