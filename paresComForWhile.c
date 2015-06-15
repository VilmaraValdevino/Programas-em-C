//Programa que imprime os números pares do 1 ao 20 (FOR E WHILE) usando SWITCH-CASE

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int contador;
char op;
main()
{
printf("\n\n For---[f] While---[w] \n\n");
printf("\n Selecione uma opcao:\t ");
scanf("%s",&op);

switch (toupper(op))
{
case 'F':
for(contador=0;contador<=20;contador+=2)
{
  if (contador%2==0)
  {
    printf("\n%d\n\n",contador);
  }
}
break;


case 'W':
contador=0;
while(contador<=20)
{
  if (contador%2==0)
  {
   printf("\n%d\n\n",contador);
  }
   contador+=2;
}
break;


default:
        printf("\n invalido !!!\n\n");
}

system ("pause");
return 0;
}
