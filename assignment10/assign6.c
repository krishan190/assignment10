#include <stdio.h>
int fact(int);
int fact(int n)
{
    int f = 1;
    while (n >= 1)
    {
        f = f * n;
        n--;
    }
    return f;
}
int main()
{
    int k, x;
    printf("Enter the number: ");
    scanf("%d", &x);
    k = fact(x);
    printf("factorial of %d is %d", x, k);
    printf("\n");
}