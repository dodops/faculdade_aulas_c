/* Programa simples para calculo do MDC
 * até o momento de dois números
 * implementação continua
*/

#include <stdlib.h>
#include <stdio.h>

void mdc(int u, int v);

int main()
{
    int first, second;

    printf("Eu quero saber o Máximo Divisor Comum de: ");
    scanf("%i %i", &first, &second);

    mdc(first, second);
}

void mdc(int u, int v)
{
    int temp;
    printf("O mdc de %i e %i é ", u, v);

    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }
    printf("%i\n", u);
}
