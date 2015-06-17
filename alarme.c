/* Programa que calcula o tempo min para dois alarmes dispararem simultaneamente */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int x,y,t; //Declarando variáveis
	
	//
	printf ("Intervalo do alarme x ?:\t");
	scanf ("%d", &x);
	
	//
	printf ("\nIntervalo do alarme y ?: \t");
	scanf ("%d", &y);	
    
	//    	
	t = 1;
	
	//
	while ( t%x!=0 || t%y!=0) 
	t++;
	printf("\nTempo min = \t %d \n\n\n\n",t);
	
	//pausando o programa
	
	system ("pause");
	return 0;

}
