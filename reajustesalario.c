/* Programa que calcula o reajuste de sal�rio */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
float salario, reajuste, SR;
printf (" informe o sal�rio e o percentual de ajuste:");
scanf (" %f %f " , &salario , &reajuste);
SR = salario + (salario*reajuste);
printf (" O valor do sal�rio reajustado �: %.2f\n", SR);
system ("pause");
return 0;
}