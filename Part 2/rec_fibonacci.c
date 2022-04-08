#include <stdio.h>

void fibo(int n);

int main()

{

    int n, a = 0, b = 1;

    puts("Enter the range : ");

    scanf("%d", &n);

    printf("%d %d", a, b);

    fibo(n);

    puts("");
}

void fibo(int n)

{

    static int c, a = 0, b = 1;

    c = a + b;

    if (c <= n)

    {

        printf(" %d", c);

        a = b;

        b = c;

        return fibo(n);
    }
}