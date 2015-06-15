//Realizar um programa em C que imprima um menu e o usuario selecione que operação aritmética deseja (adição a, subtração s, multiplicação m, divisão d)


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
int nResultado,nValor1,nValor2;
char op;
    printf(" \n\n a=adicao s=subtracao \n m=multiplicacao d=divisao");
       printf("\n\n selecione uma opcao: \t");
       scanf("%s", &op);
           printf("por favor insira o valor de A= ");
           scanf("%d", &nValor1);
               printf("insira o valor de B= ");
                scanf("%d", &nValor2);

  switch (toupper(op))
 {
   case 'A': nResultado=nValor1+nValor2;
   if(nValor1>nValor2 || nValor2>nValor1 || nValor1==nValor2){
   nResultado=(nValor1+nValor2);
   printf("\n A adicao e :\t %d\n", nResultado);
   break;}
   
     case 'S': nResultado=nValor1-nValor2;
     if(nValor1>nValor2 || nValor2>nValor1 || nValor1==nValor2) {
     nResultado=(nValor1-nValor2);
     printf("\n A subtracao e :\t %d\n", nResultado);
     break;}
     
       case 'M': nResultado=nValor1*nValor2;
       if(nValor1>nValor2 || nValor2>nValor1 || nValor1==nValor2){
       nResultado=(nValor1*nValor2);
       printf("\n A multiplicacao e:\t %d\n", nResultado);
       break;}
       
         case 'D': nResultado=nValor1/nValor2;
         if(nValor1>nValor2 || nValor2>nValor1 || nValor1==nValor2)
         nResultado=(nValor1/nValor2);
         else
         nResultado=(nValor2/nValor1);
         printf("\nA divisao e :\t %d\n", nResultado);
         break;

           default: printf("\nInvalido !!!!\n");
 }
system ("pause");
return 0;
}
