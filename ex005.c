#include <stdio.h>
#include <math.h>

// Exercício 5 - Cálculo de delta na equação de Báskara
int main(void)
{
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);

  float delta = pow(b, 2.0) - (4 * a * c);
  printf("O VALOR DE DELTA E = %.2f\n", delta);
}
