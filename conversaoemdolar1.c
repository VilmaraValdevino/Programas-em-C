/* Programa que converte valor em real para dólares */
#include <stdlib.h>
#include <stdio.h>
int main(void) {
float real,dolar,VRED;
printf ("informe um valor em real e a cotação do dólar:");
scanf ("%f %f" , &real, &dolar);
VRED = real/dolar;
printf ("O valor real em dólares é = %.2f\n" , VRED);
system ("pause");
	return 0;
}
