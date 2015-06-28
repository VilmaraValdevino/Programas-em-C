/* Faça um programa que leia um número em pés e calcular e imprimir jardas equivalentes , polegadas, centímetros ou metros, dependendo da opção selecionada pelo usuário
1 pé = 12 polegadas, 1 jarda = 3 pés, 1 polegada = 2,54 centímetros e 1 metro = 100 centímetros . */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)
{
    //Definindo nacionalidade 
    setlocale(LC_ALL,"Portuguese");

    float resultado,p;//Definindo variáveis do tipo real
    char op;//Definindo variável do tipo cadeia de caractere 'string'
    
    // 
    printf(" \n ********** ---- Menu para converter Pés ---- ********** \n ");
    printf("\n\n P=Pé. O=Polegada. C=Centimetros. ");
    printf("\n\n J=Jarda. M=Metros. \n\n ");
    
    // 
    printf("\n\n Escolha uma opção: \t " );
    scanf("%s",& op);
    
    // 
    printf("\n\n\n Insira o número de pés que você deseja converter: \t ");
    scanf("%f",&p);
  
    switch (toupper(op))
    {
        case 'P': resultado=p*1;
        printf("\n Os pés são: \t %f \t\n", resultado);
        break;
         
        case 'O': resultado=p*12 ;
        printf("\n As polegadas são: \t %f \t\n", resultado);
        break;
         
        case 'J': resultado=p/3;
        printf("\n As jardas são: \t %f \t\n", resultado);
        break;
         
        case 'C': resultado=p*(12*2.54);
        printf("\n Os centimetros são: \t %f \t\n", resultado);
        break;
             
        case 'M': resultado=p*(12*2.54)/100;
        printf("\n Os metros sao: \t %f \t\n", resultado);
        break;
         
        default: 
        printf("\n Invalido !!! \n");
    }   
    
    // 
    system ("pause");
    
    // 
    return 0;
}
