#include <stdio.h>
#include <math.h>
void main ()
{
    int i;
    float a,b;
    printf("1.Circle 2.square 3.rectangle");
    scanf("%d",&i);

    if (i==1){
        printf("enter the radius of circle");
        scanf("%f",&a);
        printf("area of circle =%.2f",3.14*a*a);
        printf("\nperi of circle=%.2f",3.14*2*a);
    }
    else if (i==2){
        printf("enter the side of square");
        scanf("%f",&a);
        printf("area of square =%.2f",a*a);
        printf("\nperi of square=%.2f",4*a);
    }
    else if (i==3){
        printf("enter the sides of rectangle ");
        scanf("%f%f",&a,&b);
        printf("area of rectangle=%.2f",a*b);
        printf("\nperi of rectangle%.2f",2*(a+b));
    }
}