/* Fa�a um programa que leia um n�mero em p�s e calcular e imprimir jardas equivalentes , polegadas, cent�metros ou metros, dependendo da op��o selecionada pelo usu�rio
1 p� = 12 polegadas, 1 jarda = 3 p�s, 1 polegada = 2,54 cent�metros e 1 metro = 100 cent�metros . */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)
{
float resultado,p;
char op;
printf(" \n ********** ---- Menu para converter Pes. ---- ********** \n ");
printf("\n\n P=Pe. O=Polegada. C=Centimetros. ");
printf("\n\n J=Jarda. M=Metros. \n\n ");
printf("\n\n Escolha uma opcao: \t " );
 scanf("%s",& op);
  printf("\n\n\n Insira o numero de pes que voce deseja converter: \t ");
   scanf("%f",&p);
  
  switch (toupper(op))
  {
     case 'P': resultado=p*1;
     printf("\n Os pes sao: \t %f \t\n", resultado);
     break;
       case 'O': resultado=p*12 ;
       printf("\n As polegadas sao: \t %f \t\n", resultado);
       break;
         case 'J': resultado=p/3;
         printf("\n As jardas sao: \t %f \t\n", resultado);
         break;
           case 'C': resultado=p*(12*2.54);
           printf("\n Os centimetros sao: \t %f \t\n", resultado);
           break;
             case 'M': resultado=p*(12*2.54)/100;
             printf("\n Os metros sao: \t %f \t\n", resultado);
             break;
               default: 
			   printf("\n Invalido !!! \n");
  }

system ("pause");
return 0;
}
