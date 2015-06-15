#include <stdio.h>
#include <stdlib.h>
int main (void) 
{
  int totalpd,pecasProduzidas,pecasDefeituosas;
  printf ("Pecas Produzidas?\t");
  scanf ("%d", &pecasProduzidas); 

  printf ("Pecas Defeituosas?\t");
  scanf ("%d", &pecasDefeituosas);

  totalpd = pecasDefeituosas*100/pecasProduzidas;
  printf ("Total de Pecas defeituosas em porcentagem: %.2d \n",totalpd);
  
if
  (totalpd>10)
{
  printf (" Maquina necessita de manutencao ");
}

else {
  printf (" Maquina nao precisa de manutencao\n\n ");
}
system ("pause");
  return 0;
  
}

