#include<stdio.h>
void Natural(int);
void Natural(int a)
{ 
    int i;
   for(i=1;i<=a;i++)
    printf(" %d ",i);
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    Natural(n);
}