#include <stdio.h>

// Exercício 1 - Batimento cardíaco
int main(void)
{
  int age;
  scanf("%i", &age);
  float result = age * 60 * 60 * 24 * 365.25;
  printf("O CORACAO BATEU %.2lf VEZES", result);
}
