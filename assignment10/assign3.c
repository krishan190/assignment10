#include<stdio.h>
int evenOdd(int);
int evenOdd(int x)
{
    if(x%2==0){
    printf("No is even =%d",x);
    return 1;
    }
    else
    printf("No is odd =%d",x);
    return 0;
}
int main()
{
    int n,y;
    printf("Enter the number:");
    scanf("%d",&n);
    y=evenOdd(n);
    printf("\nReturn = %d",y);
    printf("\n");
    return y;
}