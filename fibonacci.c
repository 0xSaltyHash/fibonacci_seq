#include<stdio.h>

// function prototype to calculate fibonacci
int fibonacci(int n);

int main(void)
{
    int order;
    order;
    scanf("%i", &order)
    for (int i = 0; i <= order; i++)
    {
        printf("%i ", fibonacci(i));
    }
    printf("\n");
}

// recursive function implementation to calculate fibonacci sequence element of sequence of order n
int fibonacci(int n)
{
    if (n == 0)
    return 0;
    else if (n == 1)
    return 1;
    return (fibonacci(n-1) + fibonacci(n-2));
}