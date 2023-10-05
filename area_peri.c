#include <stdio.h>
#include <math.h>
void main ()
{
    float r, s, l,b,area ,peri;
    // Area and peri of circle
    printf("enter the radius\n");
    scanf("%f", &r);
    area=3.14 * r * r;
    peri=2*3.14*r;
    printf("area of circle=%.2f\n",area);
    printf("peri of circle = %2f\n",peri);

    // Area and peri of square
    printf("\n enter the side\n");
    scanf("%f", &s);
    area = s*s;
    peri = 4*s;
    printf("area of sqUARE = %2f\n",area );
    printf("peri pf square =%2f\n",peri);


     // Area and peri of rectangle
     printf("\nenter the length and breadth\n");
     scanf(" %f%f",&l,&b);
     area = l*b;
     peri = 2*(l*b);
     printf("Area of rectangle =2f\n", area);
     printf("peri of rectangle=2f\n",peri);
}