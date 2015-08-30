/* Em uma papelaria a cópia de folhas custa R$0,25/cada, porém caso a quantidade de cópias seja acima de 100 folhas cada cópia sai por R$0,20 ; O programa à seguir faz o calculo do valor total à ser pago conforme a quantidade de folhas */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) 
{
     //Definindo a nacionalidade 
     setlocale(LC_ALL,"Portuguese");
      
     // 
     int quantidadeFolhas; //Declarando variável do tipo inteiro para a quantidade de folhas
     float totalPago; //Declarando variável do tipo real para o total à ser pago
      
     // 
     printf ("Digite a quantidade de folhas\t");
     scanf ("%d", &quantidadeFolhas);

     // 
     if 
     (quantidadeFolhas > 100)
     {
     totalPago = quantidadeFolhas*0.20;
     printf ("Total à ser pago: R$ %.2f\n\n\n", totalPago);
     }
     else 
     {
     totalPago = quantidadeFolhas*0.25;
     printf ("Total à ser pago : R$ %.2f\n\n\n", totalPago);
     }
     
     //Pausando o sistema e exibindo a mensagem "Pressione qualquer tecla para continuar..." 
     system ("pause");
     
     // 
     return 0;
}
