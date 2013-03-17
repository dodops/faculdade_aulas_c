//Aprendendo os conceitos de ponteiros em C
//tendo como base o livro "Head a First: C"
#include <stdlib.h>
#include <stdio.h>


void go_south_eats(int* lat, int* lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;

}

int main()
{
    int latitude = 32;
    int longitude = -64;
    go_south_eats(&latitude, &longitude);
    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
    return 0;

}
