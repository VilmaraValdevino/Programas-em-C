/* Programa que calcula a idade dos pacientes e verifica dentre eles qual é o mais idoso */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
    //Definindo a nacionalidade 
    setlocale(LC_ALL,"Potuguese");
    
    int nIdosos,idadeIdoso,maisIdoso = 0,contador = 1; //Declarando as variáveis do tipo inteiro
    
    // 
    printf("Digite a quantidade de idosos:\t");
    scanf("%d",&nIdosos);
    
    // 
    for(contador; contador <= nIdosos; contador++)
    {
        printf("Digite a idade do idoso:\t");
        scanf("%d",&idadeIdoso);
         
        if(idadeIdoso > maisIdoso)
        {
            maisIdoso = idadeIdoso;
	    }
    }
    
    // 
    printf("\nO mais idoso tem %d anos\n\n\n", maisIdoso);
    
    //Pausando o programa e exibindo a mensagem "Pressione qualquer tecla para continuar..." 
    system("pause");
    
    // 
    return 0;

}
