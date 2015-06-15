/* Programa que calcula a média de consumo de um veiculo */
#include <stdio.h>      
#include <math.h>       // round
#include <stdlib.h>

int main (void)
{
  float KM, litros, CMV , outravariavel;
  printf ("KM?, Litros? ");
  scanf ("%f, %f", &KM , &litros);
  CMV = KM/litros;
  outravariavel=round(CMV);
  printf ("O consumo médio do veículo é: %f\n", outravariavel);
  system ("PAUSE");
  return 0;
}