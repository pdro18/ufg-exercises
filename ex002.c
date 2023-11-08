#include <stdio.h>

// Exercício 2 - Consumo de energia
int main(void)
{
  double minSalary, kW_consumption;
  scanf("%lf %lf", &minSalary, &kW_consumption);
    
  double kW_price = (0.7 * minSalary) / 100;
  double total = (kW_price * kW_consumption);
  double discount = 0.9 * total;
    
  printf("Custo por kW: R$ %.2lf\nCusto do consumo: R$ %.2lf\nCusto com desconto: R$ %.2lf\n", kW_price, total, discount);
}
