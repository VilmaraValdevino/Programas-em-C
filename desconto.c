/* Calculo de desconto para saber o valor � ser pago */
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
float VO, PD, VASP;
printf (" informe o valor original da comra e o percentual de desconto:");
scanf ("%f %f" , &VO , &PD );
VASP = VO - (PD*VO);
printf (" O valor a ser pago �: %.2f\n", VASP);
system ("pause");
return 0;
}