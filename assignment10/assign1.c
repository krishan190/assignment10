#include<stdio.h>
float area(float);
float area(float b)
{
   return(3.14*b*b);
}
int main()
{
    float r,x;
    printf("Enter the radius of circle :");
    scanf("%f",&r);
    x=area(r);
    printf("area of the circle is:= %f",x);
    printf("\n");
    return x;
}