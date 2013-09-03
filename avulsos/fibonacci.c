#include <stdio.h>

int main(void)
{
    int i, numFibs;

    printf("Quantos número para a seguência?\n");
    scanf("%i", &numFibs);

    if (numFibs < 1 || numFibs > 75 ){
        printf("Número errado!\n");
        return 1;
    }

    unsigned long long int Fibonacci[numFibs];

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for (i = 2; i < numFibs; ++i)
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

    for (i = 0; i < numFibs; i++)
        printf("%llu   ", Fibonacci[i]);

    printf("\n");

    return 0;
}
