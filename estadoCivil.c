/* Programa que informa o estado civil do usuário conforme a opção selecionada */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) 
{

    char estadoCivil; // declarando variavel 
    
    //Definindo a  nacionalidade
    setlocale(LC_ALL, "Portuguese");
    
    //
    printf ("informe seu estado Civil (S,C,D ou V): \t ");
    scanf ("%c", &estadoCivil);
    
    //Declarando uma estrutura de decisão de múltipla escolha
    switch (toupper(estadoCivil)) //toupper função que converte caractere digitado pelo usuário em minúsculo para maiúsculo
    {
       case 'S':
       printf ("\n SOLTEIRO(A) \n\n");
       break;

       case 'C':
       printf ("\n CASADO(A) \n\n");
       break;

       case 'D':
       printf ("\n DIVORCIADO(A) \n\n");
       break;

       case 'V':
       printf ("\n VIÚVO(A) \n\n");
       break;
 
       default :
       printf ("\n Caractere inválido!!! \n\n");
    }
    
    //pausando o programa
    system ("pause");
    
    return 0;
  
}
