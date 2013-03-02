//Primeiro programa de hello-world
//Introdução do 'scanf' e leitura de input.
//dia 28/02/2013
//Prof. Márcio Borges.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    //mostra resultado caso o numero seja igual a 10
    //caso não passa pra o proximo exemplo
    if (numero == 10)
    {
        printf("Numero informado igual que 10\n");

    }

    else
        //caso o numero seja maior que 10
        if (numero > 10) {

            printf("numero informado maior que 10\n");

        }

    //caso o numero seja menor que 10
    else
        printf("numero informado menor que 10\n");

}
