#include<stdio.h>
void odd (int);
void odd(int n)
{
    int i;
   for(i=1;i<=n;i++)
    printf(" %d ",2*i-1);
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    odd(n);
}