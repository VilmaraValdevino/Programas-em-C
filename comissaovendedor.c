/* Programa que calcula comiss�o de um vendedor */
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
float tvendas, comissao ;
printf ("Insira o valor total de vendas:");
scanf ("%f", &tvendas);
comissao = tvendas*0.10; // 10% 
printf("teste: %f\n", comissao);
printf ("10% de Comiss�o = %.2f\n" , comissao);
system ("pause");
return 0;
}
