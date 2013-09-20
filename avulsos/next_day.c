/*
 * Programa para determinar qual o dia de amanhã
 * usando funções básicas em C.
 * Introdução ao uso de structs
*/

#include <stdio.h>

int main(void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today, tomorrow;

    const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
                                    31, 31, 30, 31, 30 , 31 };

    printf("Digite a data de hoje (mm/dd/aaaa): \n");
    scanf("%i%i%i", &today.month, &today.day, &today.year);

    if (today.day != daysPerMonth[today.month - 1]){
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }

    else if (today.month == 12) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }

    else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    printf("A data de amanhã é dia: %i/%i/%.2i.\n", tomorrow.month,
            tomorrow.day, tomorrow.year);

    return 0;
}


