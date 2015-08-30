/* Programa que converte valor em real para dólares */

#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main(void) 
{
    //Definindo nacionalidade 
    setlocale(LC_ALL,"Portuguese");
    
    float real,dolar,valorRealEmDolar; //Definindo variáveis do tipo real. 
    
    // 
    printf ("informe um valor em real: R$  ");
    scanf ("%f" , &real);
    
    // 
    printf ("informe a cotação do dólar: R$   ");
    scanf ("%f" , &dolar);
   
    // 
    valorRealEmDolar = real/dolar;
    
    // 
    printf ("O valor real em dólares é = %.2f\n\n" , valorRealEmDolar);
    
    //Pausando o programa com a mensagem "Pressione qualquer tecla para continuar..." 
    system ("pause");
    
    // 
    return 0;
}
