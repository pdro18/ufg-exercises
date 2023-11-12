#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define cost 100

// Exercício 4 - Custo da lata de cerveja
int main(void)
{
  float radius, height;
  scanf("%f %f", &radius, &height);

  float circle_area = PI * pow(radius, 2.0);
  float cylinder_sideArea = 2 * PI * radius * height;
  float totalArea = (2 * circle_area) + cylinder_sideArea;

  printf("O VALOR DO CUSTO E = %.2f\n", (totalArea * cost));
}
