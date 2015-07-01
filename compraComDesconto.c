/* Programa que calcula desconto concebido e informa valor final à ser pago na compra */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    //Definindo a nacionalidade
    setlocale(LC_ALL,"Portuguese");

    // 
    float valorOriginal, percentualDeDesconto, valorAserPago; //Declarando variáveis do tipo real
    
    // 
    printf (" informe o valor original da compra: R$ ");
    scanf ("%f" , &valorOriginal);

    printf (" informe o percentual de desconto: ");
    scanf ("%f" , &percentualDeDesconto);
    
    // 
    valorAserPago = valorOriginal - ((percentualDeDesconto*valorOriginal)/100);
    
    // 
    printf (" O valor à ser pago é: R$ %.2f\n\n\n", valorAserPago);
    
    //Pausando o programa e exibindo a mensagem "Pressione qualquer tecla para continuar..." 
    system ("pause");
    
    // 
    return 0;
}
