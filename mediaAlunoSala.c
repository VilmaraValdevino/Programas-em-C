/* Programa que calcula a média individual de cada aluno e se o mesmo foi aprovado ou reprovado 
   e também calcula a média aritmética da sala , sendo que a sala contém 20 alunos */


#include<stdio.h>
#include<stdlib.h>
int main (void)
{
   char nomeAluno[30];
   float mediaAluno, mediaSala, notaAluno1, notaAluno2,somatoria=0;
   int numeroAlunos;
   int contador = 1 ; // contador = quantidade de alunos posteriormente incrementando e atribuindo a qauntida de alunos à contador
     printf ("\nInforme o numero de alunos da sala: \t");
     scanf ("%d", &numeroAlunos);
	   for (contador;contador<=numeroAlunos;contador++)
       {
        printf ("\n\n\nEntre com o nome do aluno:\t");
        scanf ("%s", nomeAluno);
          printf ("\nEntre com a nota 1 do aluno:\t");
          scanf ("%f",&notaAluno1);
            printf ("\nEntre com a nota 2 do aluno:\t");
            scanf ("%f",&notaAluno2);
         mediaAluno = (notaAluno1 + notaAluno2) / 2;
         printf ("\nA media do aluno %s e: %.2f \t\n",nomeAluno,mediaAluno);   
		 if (mediaAluno>=6)
          {
           printf ("\nAprovado\n");
          }else {
                printf ("\nReprovado\n");
                }     
         somatoria = somatoria+mediaAluno;     
	   } //fecha o laço for
         mediaSala = somatoria / numeroAlunos;
         printf ("\n\n\nA media da sala e: %.2f \t\n\n",mediaSala); 
  system ("pause");
  return 0;
}
