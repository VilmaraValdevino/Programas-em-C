/* Lupita tem 20 moedas de diferentes valores, ela deseja comprar um presente para seu pai, o presente custa o valor da sua moeda mais cara que ela tem,faça um programa em C que informe qual o valor da sua moeda mais cara */

#include <stdio.h>
#include <stdlib.h>

main( )
{
  int a,i,maior=0;
    for(i=1;i<=20;i++)
      { 
         printf("\n Por favor insira o valor da moeda %d: ",i);
         scanf("%d",&a);
          if(a>maior)
          { 
             maior=a;
          }
		  else
		  {
             maior=maior;
          }      
      }
            
printf("\n\n A moeda maior e: %d \n\n",maior);
  
  system ("pause");
  return 0;
}
