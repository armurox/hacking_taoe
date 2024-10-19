#include <stdio.h>
#include <stdlib.h>

int factorial(int);
int fixed_factorial(int);

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage: ./factorial_buggy NUM");
        return 1;
    }

    printf("%d\n", factorial(atoi(argv[1])));
    printf("%d\n", fixed_factorial(atoi(argv[1])));
    
}

int factorial(int a)
{
    for (int i = 1; i < a; i++)
        a *= i;
    return a;
}

int fixed_factorial(int x)
{
    int a = x;
    for (int i = 1; i < x; i++)
        a *= i;
    return a;
}
