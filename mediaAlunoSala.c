/* Programa que calcula a média individual de cada aluno e se o mesmo foi aprovado ou reprovado e também calcula a média aritmética da sala , sendo que a sala contém 20 alunos */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    //Definindo nacionalidade 
    setlocale(LC_ALL,"Portuguese");
    
    char nomeAluno[30];//Definindo variável do tipo cadeia de caractere 'string'
    float mediaAluno, mediaSala, notaAluno1, notaAluno2,somatoria=0;//Definindo vriáveis do tipo real
    int numeroAlunos;//Declarando variável do tipo inteiro
    int contador = 1 ; // contador = quantidade de alunos posteriormente incrementando e atribuindo a quantidade de alunos à contador
     
    // 
    printf ("\nInforme o número de alunos da sala: \t");
    scanf ("%d", &numeroAlunos);
    
    //  
    for (contador;contador<=numeroAlunos;contador++)
    {
        printf ("\n\n\nEntre com o nome do aluno:\t");
        scanf ("%s", nomeAluno);
                
        printf ("\nEntre com a 1ª nota do aluno:\t");
        scanf ("%f",&notaAluno1);
           
        printf ("\nEntre com a 2ª nota do aluno:\t");
        scanf ("%f",&notaAluno2);
            
        mediaAluno = (notaAluno1 + notaAluno2) / 2;
            
        printf ("\nA média do aluno %s é: %.2f \t\n",nomeAluno,mediaAluno);   
		  
        if (mediaAluno>=6)
        {
            printf ("\nAprovado\n");
        }
        else 
        {
            printf ("\nReprovado\n");
        } 
              
        somatoria = somatoria+mediaAluno;     
    }
    
    // 
    mediaSala = somatoria / numeroAlunos;
        
    // 
    printf ("\n\n\nA média da sala é: %.2f \t\n\n",mediaSala); 
    
    //Pausando o programa e exibindo a mensagem "Pressione qualquer tecla para continuar..."
    system ("pause");
    
    // 
    return 0;
}
