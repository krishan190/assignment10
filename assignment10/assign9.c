#include<stdio.h>
int digit(int);
int digit(int n)
{
   int dig,rem;
   printf("Enter the digit: ");
   scanf("%d",&dig);
   while(n)
   {
       rem=n%10;
       if(rem==dig)
       printf("yes digit is present");
       n=n/10;
   }
   if(n==0)
   printf("digit is not present");
   return 0;
}
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    digit(x);
    // printf("digit is not present");
    printf("\n");
    return 0;