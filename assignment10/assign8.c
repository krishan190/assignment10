#include<stdio.h>
int fact(int);
int fact(int n)
{
    int f=1;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    return f;
}
int permu(int,int);
int permu(int n,int r)
{
    int c= fact(n)/fact(r);
    return c;
}
int main()
{
    int n,r,k;
    printf("Enter the value of n and r");
    scanf("%d%d",&n,&r);
    k=permu(n,r);
    printf("permutation of a given number is =%d",k);
    printf("\n");
    return k;
}
