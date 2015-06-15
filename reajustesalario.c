/* Programa que calcula o reajuste de salário */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
float salario, reajuste, SR;
printf (" informe o salário e o percentual de ajuste:");
scanf (" %f %f " , &salario , &reajuste);
SR = salario + (salario*reajuste);
printf (" O valor do salário reajustado é: %.2f\n", SR);
system ("pause");
return 0;
}