/*media.c-calcular a m�dia de um aluno*/
#include <stdlib.h>
#include <stdio.h>
int main(void) {
float a,b,c;
printf ("notas");
scanf ("%f %f" , &a, &b);
c= (a + b) / 2;
printf ("m�dia = %.1f\n" , c);
if (c>=6.0)
printf ("aprovado\n");
else
printf ("reprovado\n");
system ("pause");
	return 0;
}