/* Programa que calcula o reajuste de salário */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // Definindo a nacionalidade
    setlocale(LC_ALL,"Portuguese");
    
    float salario, reajuste, salarioReajustado; // Declarando variáveis do tipo real
    
    // 
    printf (" informe o salário:  ");
    scanf ("%f" , &salario);

    // 
    printf (" informe o percentual de ajuste: ");
    scanf ("%f" , &reajuste);
	    
    // 
    salarioReajustado = salario + (salario*reajuste/100);
    
    // 
    printf (" O valor do salário reajustado é: %.2f\n\n\n\n", salarioReajustado);
    
    // 
    system ("pause");
    
    // 
    return 0;
}
