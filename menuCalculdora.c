/* Realizar um programa em C que imprima um menu e o usuario selecione que operação aritmética deseja (adição a, subtração s, multiplicação m, divisão d) */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void)
{
    //Definindo a nacionalidade 
    setlocale(LC_ALL,"Portuguese");
    
    int nResultado,nValor1,nValor2;//Declarando variáveis do tipo inteiro
    char op;//Declarando variável do tipo caractere
    
    // 
    printf(" \n\n a=adição s=subtração \n m=multiplicação d=divisão");
    
    // 
    printf("\n\n selecione uma opção: \t");
    scanf("%s", &op);
    
    // 
    printf("\n por favor insira o valor de A= ");
    scanf("%d", &nValor1);
    
    // 
    printf("insira o valor de B= ");
    scanf("%d", &nValor2);


    // 
    switch (toupper(op))
    {
         // 
         case 'A': nResultado=nValor1+nValor2;
         if(nValor1>nValor2 || nValor2>nValor1 || nValor1==nValor2)
         {
         nResultado=(nValor1+nValor2);
         printf("\n A adição é :\t %d\n\n", nResultado);
         break;
         }
          
         // 
         case 'S': nResultado=nValor1-nValor2;
         if(nValor1>nValor2 || nValor2>nValor1 || nValor1==nValor2) 
         {
         nResultado=(nValor1-nValor2);
         printf("\n A subtração é :\t %d\n\n", nResultado);
         break;
         }
         
         // 
         case 'M': nResultado=nValor1*nValor2;
         if(nValor1>nValor2 || nValor2>nValor1 || nValor1==nValor2)
         {
         nResultado=(nValor1*nValor2);
         printf("\n A multiplicação é:\t %d\n\n", nResultado);
         break;
         }
         
         // 
         case 'D': nResultado=nValor1/nValor2;
         if(nValor1>nValor2 || nValor2>nValor1 || nValor1==nValor2)
         nResultado=(nValor1/nValor2);
         else
         nResultado=(nValor2/nValor1);
         printf("\nA divisão é :\t %d\n\n", nResultado);
         break;
         
         //   
         default: printf("\n Inválido !!!!\n\n");
    }
    
    //Pausando o sistema e exibindo a mensagem "Pressione qualquer tecla para continuar..."
    system ("pause");
    
    // 
    return 0;
}
