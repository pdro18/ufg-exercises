#include <stdio.h>

// (PT-BR) Exercício 1 - Batimento cardíaco
// (EN-US) Exercise 1 - Heartbeat
int main(void)
{
  float age;
  scanf("%f", &age);
  float result = age * 60 * 60 * 24 * 365.25;
  printf("O CORACAO BATEU %.2lf VEZES", result);
}
