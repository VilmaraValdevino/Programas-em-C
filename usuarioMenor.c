/* Escreva um programa em C que recebe 'n' n�mero do usu�rio, e recebe o n�mero 'n' tamb�m, e determine qual destes n�meros � o menor. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
 
main()
{
      int numero1, numero2; //Declarando vari�veis de tipo real  
 
      //Definindo a nacionalidade
      setlocale(LC_ALL,"Portuguese");
 
      //Definindo cor do plano de fundo e fonte
      system("color 0d");
      
      // 
      printf ("\n Digite um n�mero: \t");
      scanf ("%d", &numero1);
      
      // 
      printf ("\n Digite outro n�mero: \t");
      scanf ("%d", &numero2);
      
      // 
      if (numero1>numero2)
      {
          system("cls");
          printf("\n O menor n�mero � %d " , numero2);
      }
      else
	  {
          system("cls");
          printf("\n O menor n�mero � %d " , numero1);
      }
      
      
      //Pausando o Programa sem aparecer a mensagem "Pressione qualquer tecla para continuar"
      getche();
}
