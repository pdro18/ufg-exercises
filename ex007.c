#include <stdio.h>

#define NUM_ELEMENTS 2

// Exercício 7 - Média de dois números
int main(void)
{
    int num[NUM_ELEMENTS];
    float average;
    
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        scanf("%i", &num[i]);
        average += num[i];
    }
    
    average /= NUM_ELEMENTS;
    printf("MEDIA = %.2f\n", average);
}
