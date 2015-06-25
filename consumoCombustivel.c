/* Programa que calcula a média de consumo de um veiculo */

#include <stdio.h>      
#include <math.h>    // permite usar a função round
#include <stdlib.h>
#include <locale.h>

int main (void)
{ 
  //Definindo naacionalidade
  setlocale(LC_ALL,"Portuguese");
  
  //Definindo variáveis do tipo real
  float km, litros, consumoMedioDeUmVeiculo, outraVariavel;
  
  // 
  printf ("KM?  ");
  scanf ("%f", &km);
  
  // 
  printf ("Litros?  ");
  scanf ("%f", &litros);
  
  // 
  consumoMedioDeUmVeiculo = km/litros;
  outraVariavel=round(consumoMedioDeUmVeiculo); // função round faz o arredondamento
  
  // 
  printf ("O consumo médio do veículo é: %f \n", outraVariavel);
  
  // 
  system ("PAUSE");
  
  // 
  return 0;
}
