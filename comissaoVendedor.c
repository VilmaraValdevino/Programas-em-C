/* Programa que calcula comissão de um vendedor sendo que o mesmo ganha 10% de comissão referente ao seu total de vendas */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    float totalVendas, comissao ; //Declarando variáveis
    
    //Definindo nacionalidade
    setlocale(LC_ALL,"Portuguese");
    
    // 
    printf ("\n Insira o valor total de vendas: \t R$ ");
    scanf ("%f", &totalVendas);
    
    // 
    comissao = totalVendas*0.10; // *0.10 = calculo de 10% sobre o total de vendas 
    
    // 
    printf(" Valor da comissão: R$ %.2f \n\n\n\n", comissao);
    
    //pausando o programa
    system ("pause");
    
    return 0;
}
