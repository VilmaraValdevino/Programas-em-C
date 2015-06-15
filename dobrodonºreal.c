/*dobro.c-dobrodeumnúmerorealqualquer*/
#include <stdlib.h>
#include <stdio.h>
int main(void) {
float a,b;
printf ("digite um numero real qualquer =");
scanf ("%f" , &a);
b= a*2;
printf ("dobro do numero informado = %.2f\n" , b);
system ("pause");
	return 0;
}