/*Construa um programa em linguagem “C” que calcule uma matriz nxn:
    a) Diagonal principal
    b) Diagonal secundaria
    c) Matriz triangular superior
    d) Matriz triangular inferior
    e) Soma dos aij elementos da matriz
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


int main() 
{
    
      //Definindo a nacionalidade
      setlocale(LC_ALL,"Portuguese");
 
      //Definindo cor do plano de fundo e fonte
      system("color d0");
      
      //declarando váriaveis do tipo inteira sendo uma váriavel Matriz com espaços de linhas e colunas e as váriavéis "linha" e "coluna" que posteriormente vão armazenar os números alocados na matriz, variaveis: "principal","secundaria","superior" e "inferior" vão armazenar os resultados das operações matemáticadas relacionadas à cada variavel, limite vai receber o tamanho de limite máximo que a matriz terá , por exemplo: se o usuário digitar 5 será uma matriz 5x5 observando que este programa só trabalha com matriz quadrada!.
      int M[5][5], linha, coluna, principal=0, secundaria=0, superior=0, inferior=0, limite;
      
      //
      printf("Informe o tamanho da matriz: ");
      scanf("%d", &limite);
      
      // Clear Screen , limpa a tela
      system("cls");
      
      // 
      printf("Preencha a matriz!!!\n");
      
      // 
      for (linha=0;linha<limite;linha++) // Alimentando a matriz nxn
      {
            for (coluna=0;coluna<limite;coluna++)
            {    
                 printf ("\nDigite o número da posição [%d][%d]: ", linha, coluna);
                 scanf ("%d", &M[linha][coluna]);
                    
                 if (linha == coluna) // Se linha igual coluna = diagnonal principal
                 {
                     principal += M[linha][coluna];
                 }
                 if ((linha + coluna) == (limite-1)) // Linha mais coluna igual N menos 1 = diagonal secundaria
                 {           
                     secundaria += M[linha][coluna];
                 }
                 if (linha < coluna) // linha menor que coluna igual soma dos números acima da diagonal principal (Matriz triangular superior)
                 {         
                     superior += M[linha][coluna];
                 }
                 if (linha > coluna) // linha maior que coluna igual soma dos números abaixo da diagonal principal (Matriz triangular inferior)
                 {
                    inferior += M[linha][coluna];    
                 }  
              
                 printf ("\t%d", M[linha][coluna]);
           }
       }
       
      //
      system("cls");
    
      // Impressão da matriz na tela
      for (linha=0;linha<limite;linha++)
      {
        	printf("\n");
        	
            for (coluna=0;coluna<limite;coluna++)
            {
                printf ("%d ",M[linha][coluna]);
            }
      }
      
        // 
        printf ("\n\n\n\n");
        printf ("Soma diagonal Principal: %d \n", principal);
        printf ("Soma diagonal Secundaria: %d \n", secundaria);
        printf ("Soma Matriz Triangular Superior: %d \n", superior);
        printf ("Soma Matriz Triangular Inferior: %d \n", inferior);
        printf ("\n\n\nA soma dos elementos da matriz é: %d \n\n\n", principal + secundaria + superior + inferior);
    
    // 
    getche();
      
}
