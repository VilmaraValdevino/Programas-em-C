/* Programa que converte valor em ral para d�lares */
#include <stdlib.h>
#include <stdio.h>
int main(void) {
float real,dolar,VRED;
printf ("informe um valor em real e a cota��o do d�lar:");
scanf ("%f %f" , &real, &dolar);
VRED = real/dolar;
printf ("O valor real em d�lares � = %.2f\n" , VRED);
system ("pause");
	return 0;
}