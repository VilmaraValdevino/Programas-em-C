/*metrosquadrados.c-calculaM²deumasala*/
#include <stdlib.h>
#include <stdio.h>
int main(void) {
float a,b,c;
printf ("medidas?");
scanf ("%f %f" , &a, &b);
c= a*b;
printf ("m²= %.2f\n" , c);
system ("pause");
	return 0;
}