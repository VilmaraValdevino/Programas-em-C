/* Solicitar um n�mero entre 1 e 4 Se a pessoa digitar um n�mero diferente mostrar a mensagem entrada inv�lida e solicitar o n�mero novamente.
Se digitar correto mostrar o n�mero digitado. Implemente este exerc�cio usando Do While */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

main()
{
      int numero ; //Declarando vari�veis

      //Definindo a nacionalidade
      setlocale(LC_ALL,"Portuguese");

      //Definindo cor do plano de fundo e fonte
      system("color fd");
      
      //
      do
      {   
            printf ("\n Digite um n�mero de 1 � 4 : \t ");
            scanf("%d", &numero);
            
        	if (numero<1 || numero>4)
            printf("\n\n Entrada inv�lida \n\n\n");
            
      }
      while (numero<1 || numero>4);
            printf("\n\n o numero digitado � %d", numero);

      //Pausando o Programa sem aparecer a mensagem "Pressione qualquer tecla para continuar"
      getche();
}
