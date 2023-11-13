#include <stdio.h>
#include <math.h>

// Exercício 8 - Volume da pirâmide de base hexagonal
int main(void)
{
    float height, edge;
    scanf("%f %f", &height, &edge);
    
    float hexArea = (3 * pow(edge, 2.0) * sqrt(3)) / 2;
    float vol = (1.0 / 3.0) * hexArea * height;
    
    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", vol);
}
