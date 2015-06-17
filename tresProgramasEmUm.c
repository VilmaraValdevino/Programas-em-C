/* realizar um programa que mostre um menu com os 3 primeiros programas.*/

# include <stdio.h>
# include <math.h>
# include <ctype.h>
# include <stdlib.h>

main()
{
  int ano;
  int diaTrabalhado=0,salarioSemana=0,salarioQuinzena=0,salarioHora;
  float numero,resultado;
  char op;
  printf("\n \n Ano bissexto---[a] \n Salario de 8 horas---[b] ");
  printf("\n Raiz quadrada de un numero ---[c] ");
  printf("\n \n \n selecione uma opcao: ");
  scanf("%s",&op);
  
      switch (toupper(op))
      {
        case 'A':
        printf("Digite o ano: \t ");
        scanf("%d",&ano);
        if(ano%4==0 && ano%100!= 0 || ano%400==0)
        {
         printf("O ano digitado e bissexto \n\n");
        }
         else
        {
         printf ("O ano digitado nao e bissexto \n\n ");
        }
         break;
     
       case'B':
       printf("Digite quanto ganha por hora: \t ");
       scanf("%d",&salarioHora);
         diaTrabalhado=8*salarioHora;
         salarioSemana=diaTrabalhado*6;
         salarioQuinzena=salarioSemana*2;
       printf ("\n Por dia vai ganhar: %d", diaTrabalhado);
       printf ("\n Por semana vai ganhar: %d", salarioSemana);
       printf ("\n Por quinzena vai ganhar: %d\n\n", salarioQuinzena);
       break;
    
       case'C':
       printf("Digite um numero: ");
       scanf("%f",&numero);
       resultado=sqrt(numero);
       printf(" O resultado da raiz quadrada do numero digitado e: %.2f \n\n", resultado);
       break;
       
       default:
       	printf ("Invalido!!!\n\n\n");
       	break;
     }
  
system ("pause");
return 0;

}
