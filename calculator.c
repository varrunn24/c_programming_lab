#include<stdio.h>
int main ()
{
    float a,b,add,sub,multiply,div;
    printf("enter two numbers ");
    scanf("%f%f", &a,&b);
     
    add =a+b;
    printf("\n the sum is : %2f",add);

    sub=a-b;
    printf("\n the sum is : %2f",sub);


    multiply =a*b;
    printf("\n the multiply is :%2f",multiply);

    div=a/b;
    printf("\n the div is :%2f",div);
     return 0;
     
}