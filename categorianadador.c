#include <stdio.h>
#include <stdlib.h>
int main (void) {
char estadoCivil;
printf ("informe seu estado Civil (S,C,D ou V) \n");
scanf ("%c", &estadoCivil);

switch (estadoCivil){
case 'S':
  printf ("SOLTEIRO(A)\n");
  break;

  case 'C':
  printf ("CASADO(A)\n");
  break;

  case 'D':
  printf ("DIVORCIADO(A)\n");
  break;

  case 'V':
  printf ("VIUVO(A)");
  break;
 
  default :
  printf ("Caractere invalido!!!\n");
}
system ("pause");
  return 0;
  
}

