/* Programa que converte valor em real para d�lares */
#include <stdlib.h>
#include <stdio.h>
int main(void) {
float real,VRED;
printf ("informe um valor em real:");
scanf ("%f" , &real);
VRED = real/3.12;
printf ("O valor real em d�lares � = %.2f\n" , VRED);
system ("pause");
	return 0;
}