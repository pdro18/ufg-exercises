#include <stdio.h>
#include <math.h>

// Exercício 9 - Tempo em segundos
int main(void)
{
    int hours, min, sec;
    scanf("%i %i %i", &hours, &min, &sec);
    
    int total = (hours * pow(60, 2.0)) + (min * 60) + sec;
    
    printf("O TEMPO EM SEGUNDOS E = %i\n", total);
}
