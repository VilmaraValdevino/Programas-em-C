/*  Programa que recebe 20 números e mostra quantos são pares e quantos são ímpares */

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
     int cont=1,par=0,impar=0,numero;
     
     //Estrutura encadeada
     while (cont<=20)
     {
           printf ("Digite o %dº número: \t",cont);
           scanf ("%d",&numero);
 
           if (numero%2==0)
           {
           	 par++; 
           }
		   else
		   {
           	 impar++;
           }
                       
     cont++; 
     }
     
     //
     printf("\n%d números são pares\n",par);
     printf("%d números são ímpares",impar);
     
     // 
     getche();     
}
