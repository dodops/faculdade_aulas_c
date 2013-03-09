//Quarto programa em C
//O objetivo aqui é um programa que realiza uma operação de soma
//usando o conceito de funções em c;


#include <stdio.h>
#include <stdlib.h>

//função somar, que recebe dois argumentos e retorna um inteiro
//da soma de ambos.
int somar(int x, int z)
{
    return x + z;
}


//função main inicia o programa e pede ao usuário
//que insira os digitos
//por fim, os digitos são passados como argumentos para a
//função somar
main()
{
    int a, b;
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite outro número: ");
    scanf("%d", &b);
    printf("O resultado da soma dos números é: %d\n", somar(a, b));
}
