/* Programa que calcula o tempo min para dois alarmes dispararem simultaneamente */
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int x,y,t;
	printf ("Intervalo do alarme x ?:\t\n");
	scanf ("%d", &x);
	printf ("Intervalo do alarme y ?: \t\n");
	scanf ("%d", &y);	
	
	t = 1;
	
	while ( t%x!=0 || t%y!=0) t++;
	printf("Tempo min = \t %d \n",t);
	
system ("pause");
return 0;

}
