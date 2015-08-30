/* Escreva um programa em C que recebe 'n' número do usuário, e recebe o número 'n' também, e determine qual destes números é o menor. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
 
main()
{
      int numero1, numero2; //Declarando variáveis de tipo real  
 
      //Definindo a nacionalidade
      setlocale(LC_ALL,"Portuguese");
 
      //Definindo cor do plano de fundo e fonte
      system("color 0d");
      
      // 
      printf ("\n Digite um número: \t");
      scanf ("%d", &numero1);
      
      // 
      printf ("\n Digite outro número: \t");
      scanf ("%d", &numero2);
      
      // 
      if (numero1>numero2)
      {
          system("cls");
          printf("\n O menor número é %d " , numero2);
      }
      else
	  {
          system("cls");
          printf("\n O menor número é %d " , numero1);
      }
      
      
      //Pausando o Programa sem aparecer a mensagem "Pressione qualquer tecla para continuar"
      getche();
}
