#include<stdio.h>
void prime(int);
void prime(int n) 
{
    int i;
    for(i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            printf(" %d ",i);
            n=n/i;
        }
    }
        printf("\n");
}
int main()
{
    prime(36);
    return 0;
}