/* 1. Fa�a um pseudoc�digo que mostra a s�rie dos n�meros �mpares de 0 a 100   {USANDO WHILE} */

#include <stdio.h>
#include <stdlib.h> // biblioteca que permite usar a fun��o "system" que no caso deste programa estou usando para mudar as cores da fonte e plano de fundo e dar um pause na tela.
#include <locale.h> //Biblioteca que permite usar a fun��o "setlocale"

int numero=0;
main()
{
	setlocale(LC_ALL, "Portuguese"); // fun��o que permite usar caracteres especiais.
	 system ("color ac"); // fun��o que permite mudar a cor do plano de fundo e da fonte usando numeros em hexadecimais de 0 � 9 e de A � F.
	 
	 printf("\n [*][*][*][*][*]  S�rie de n�meros �mpares de 0 � 100  [*][*][*][*][*] \n\n\n");
	 

	     while(numero<=100)
	     {
	 
	       if (numero%2!=0)
		   printf ("\n %d \n\n" , numero);
	       numero++;
           
         }
	system ("pause");
	return 0;
}
