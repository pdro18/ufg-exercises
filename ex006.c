#include <stdio.h>

#define SIZE 2

// Exercício 6 - Cálculo do determinante de uma matriz de duas dimensões
int main(void)
{
    float biDim[SIZE][SIZE];
    
    for (int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            scanf("%f", &biDim[i][j]);
        }
    }
    
    float det = (biDim[0][0] * biDim[1][1]) - (biDim[1][0] * biDim[0][1]);
    
    printf("O VALOR DO DETERMINANTE E = %.2f\n", det);
}
