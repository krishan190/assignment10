#include <stdio.h>
float SI(int, int, int);
float SI(int p, int r, int t)
{
    return (p * r * t / 100);
}
int main()
{
    int p, r, t;
    float si, x;
    printf("Enter the principal ,rate and time :");
    scanf("%d%d%d", &p, &r, &t);
    x = SI(p, r, t);
    printf("Simple Interest is:= %f", x);
    printf("\n");
    return x;
}