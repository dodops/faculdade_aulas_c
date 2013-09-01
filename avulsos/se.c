#include <stdio.h>

int main()
{
    int counter, prim, ult, meio, n, procura, array[50];

    printf("----Bem Vindo!!!------");

    printf("Quantos números tem sua lista?");
    scanf("%i", &n);

    printf("Digite os %i números\n", n);

    for( counter = 0; counter < n; counter++ )
        scanf("%i", &array[counter]);

    printf("Digite um valor pra procurar:\n");
    scanf("%i", &procura);

    prim = 0;
    ult = n - 1;
    meio = (prim + ult)/ 2;

    while(prim <= ult)
    {
        if(array[meio] < procura )
            prim = meio + 1;
        else if (array[meio] == procura)
        {
            printf("%i encontrado em %i\n", procura, meio + 1);
            break;
        }
        else
            ult = meio - 1;

        meio = (prim + ult)/2;
    }

    if(prim > ult)
        printf("Não encontrado!\n");

    return 0;
}
