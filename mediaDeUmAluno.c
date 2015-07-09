/* Calcular a média de um único aluno*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) 
{
    //Definindo nacionalidade
    setlocale(LC_ALL,"Portuguese");
    
    float nota1,nota2,media;//Declarando variáveis do tipo real
    
    // 
    printf ("notas:\t");
    scanf ("%f %f" , &nota1, &nota2);
    
    // 
    media= (nota1 + nota2) / 2;
    
    // 
    printf ("média = %.1f\n" , media);

    // 
    if (media>=6.0)
    printf ("Aprovado\n\n\n");
    else
    printf ("Reprovado\n\n\n");
    
    //Pausando o sistema e exibindo a mensagem "Pressione qualquer tecla para continuar..."
    system ("pause");
    
    // 
    return 0;
}
