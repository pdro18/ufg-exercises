#include <stdio.h>

// Exercício 3 - Conversões para o sistema métrico
int main(void)
{
  float fahrenheit, inch;
  scanf("%f %f", &fahrenheit, &inch);

  float celsius = (5 * (fahrenheit - 32)) / 9;
  float millimeter = inch * 25.4;

  printf("O VALOR EM CELSIUS = %.2f\nA QUANTIDADE DE CHUVA E = %.2f\n", celsius, millimeter);
}

  
