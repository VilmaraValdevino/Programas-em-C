/*  Programa que recebe 20 n�meros e mostra quantos s�o pares e quantos s�o �mpares */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
     //Definindo nacionalidade
     setlocale(LC_ALL,"Portuguese");
     
     //Deninindo cor do plano de fundo e fonte.
     system("color db");
     
     //Declarando vari�veis
     int cont=1,par=0,impar=0,numero;
     
     //Estrutura encadeada
     while (cont<=20)
     {
           printf ("Digite o %d� n�mero: \t",cont);
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
     printf("\n%d n�meros s�o pares\n",par);
     printf("%d n�meros s�o �mpares",impar);
     
     // 
     getche();     
}
