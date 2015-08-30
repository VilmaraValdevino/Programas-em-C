/* 1. Faça um pseudocódigo que mostra a série dos números ímpares de 0 a 100   {USANDO WHILE} */

#include <stdio.h>
#include <stdlib.h> // biblioteca que permite usar a função "system" que no caso deste programa estou usando para mudar as cores da fonte e plano de fundo e dar um pause na tela.
#include <locale.h> //Biblioteca que permite usar a função "setlocale"

int numero=0;
main()
{
	setlocale(LC_ALL, "Portuguese"); // função que permite usar caracteres especiais.
	system ("color ac"); // função que permite mudar a cor do plano de fundo e da fonte usando numeros em hexadecimais de 0 à 9 e de A à F.
	 
	printf("\n [*][*][*][*][*]  Série de números ímpares de 0 à 100  [*][*][*][*][*] \n\n\n");
	 

		while(numero<=100)
	    {
	    	if (numero%2!=0)
	    	{
		   		printf ("\n %d \n\n" , numero);
	       		numero++;
         	}
	    }
	system ("pause");
	return 0;
}
