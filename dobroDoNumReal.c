/* Programa que calcula o dobro de um número real qualquer */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) 
{
    //Definindo a nacionalidade
    setlocale(LC_ALL,"Portuguese");
    
    float numero,dobro;//Declarando variáveis do tipo real
    
    // 
    printf ("Digite um número real qualquer: \t");
    scanf ("%f" , &numero);
    
    //  
    dobro = numero*2;
    
    // 
    printf ("Dobro do número informado = %.2f\n" , dobro);
    
    //Pausando o programa e exibindo a mensagem "Pressione qualquer tecla para continuar..."
    system ("pause");
    
    // 
    return 0;
}
