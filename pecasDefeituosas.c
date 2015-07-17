/* Programa que verifica a partir da quantidade de peças produzidas quantas dessas peças estão defeituosas e se a quantidade de peças defeituosas for superior à 10%, informa que a máquina necessita de reparo para melhor desempenho! */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) 
{
    // Definindo a nacionalidade
    setlocale(LC_ALL,"Portuguese");
    
    int totalPecasDefeituosas,pecasProduzidas,pecasDefeituosas; // Declarando variáveis do tipo inteiro 
    
    // 
    printf ("Peças Produzidas?\t");
    scanf ("%d", &pecasProduzidas); 
    
    // 
    printf ("Peças Defeituosas?\t");
    scanf ("%d", &pecasDefeituosas);
    
    // 
    totalPecasDefeituosas = pecasDefeituosas*100/pecasProduzidas;
    
    // 
    printf ("Total de Peças defeituosas em porcentagem: %.2d \n\n",totalPecasDefeituosas);
    
    // 
    if (totalPecasDefeituosas>10)
    {
      printf (" Máquina necessita de manutenção ! \n\n\n\n\n");
    }
       
    else 
    {
      printf (" Máquina não precisa de manutenção ! \n\n\n\n\n ");
    }
    
    // Pausando o sistema e exibe a mensagem "Pressione qualquer tecla para continuar..."
    system ("pause");
    
    // 
    return 0;
}
