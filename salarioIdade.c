/*  Programa que recebe o salário e a idade de 5 pessoas e mostra quantas pessoas são maiores de idade e quantas recebem mais que R$4.000,00 reais */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
     //Definindo nacionalidade
     setlocale(LC_ALL,"Portuguese");
     
     //Deninindo cor do plano de fundo e fonte.
     system("color db");
     
     //Declarando variáveis
     int idade,contIdade=0,cont=1,contSalario=0;
     float salario;
     
     // 
     while(cont<=5)
     {
           printf("\n\n\nDigite o salário: \t R$ ");
           scanf("%f",&salario);
           
           printf("\nDigite a idade: \t");
           scanf("%d",&idade);
           
     	   if(idade>=18)
		   {
           contIdade++;
           }
           if(salario>4000)
		   {
           contSalario++;
           }
           
     cont++;  
     }
     
     // 
     printf("\n\n%d são maiores de idade \t",contIdade);
     printf("\n%d pessoas recebem mais que R$ 4.000,00 \t",contSalario);
     
     // 
     getche();     
}
