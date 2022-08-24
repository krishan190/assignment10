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
int comb(int, int);
int comb(int n, int r)
{
     int c = fact(n) / (fact(r) * fact(n - r));
     return c;
}
int main()
{
     int n, r, k;
     printf("Enter the value of n and r :");
     scanf("%d%d", &n, &r);
     k = comb(n, r);
     printf("combination of given number: %d ", k);
     printf("\n");
     return k;
}
