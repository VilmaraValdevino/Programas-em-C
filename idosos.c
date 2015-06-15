/* Programa que calcula a idade dos pacientes e verifica dentre eles qual é o mais idoso */
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
int nIdosos,idadeIdoso,maisIdoso = 0,contador = 1;  
printf("Digite a quantidade de idosos:\t");
scanf("%d",&nIdosos);
  for(contador; contador <= nIdosos; contador++)
    {
     printf("Digite a idade do idoso:\t");
     scanf("%d",&idadeIdoso);

     if(idadeIdoso > maisIdoso)
         {
         maisIdoso = idadeIdoso;
	     }
    }

    printf("O mais idoso tem %d anos\n", maisIdoso);
    
system("pause");
return 0;

}
