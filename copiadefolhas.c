#include <stdio.h>
#include <stdlib.h>
int main (void) 
{
  int folhas; // quantidade de folhas
  float totalPago; // total à ser pago
  printf ("Digite a quantidade de folhas\t");
  scanf ("%d", &folhas);

if 
  (folhas > 100)
 {
   totalPago = folhas*0.20;
  printf ("Total a ser pago: %.2f\n", totalPago);
}

else {


  totalPago = folhas*0.25;
  printf ("Total a ser pago : %.2f\n", totalPago);
}
system ("pause");
  return 0;
  
}
