/* Solicitar um número entre 1 e 4 Se a pessoa digitar um número diferente mostrar a mensagem entrada inválida e solicitar o número novamente.
Se digitar correto mostrar o número digitado. Implemente este exercício usando Do While */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

main()
{
      int numero ; //Declarando variáveis

      //Definindo a nacionalidade
      setlocale(LC_ALL,"Portuguese");

      //Definindo cor do plano de fundo e fonte
      system("color fd");
      
      //
      do
      {   
            printf ("\n Digite um número de 1 à 4 : \t ");
            scanf("%d", &numero);
            
        	if (numero<1 || numero>4)
            printf("\n\n Entrada inválida \n\n\n");
            
      }
      while (numero<1 || numero>4);
            printf("\n\n o numero digitado é %d", numero);

      //Pausando o Programa sem aparecer a mensagem "Pressione qualquer tecla para continuar"
      getche();
}
