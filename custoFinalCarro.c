/* O custo de um carro novo ao consumidor � a soma do custo de f�brica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). 
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de f�brica de um carro, calcular e 
escrever o custo final ao consumidor. */

 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 
 main()
{
     //Definindo a Nacionalidade
     setlocale(LC_ALL, "Portuguese");
     
     //Definindo a cor do plano de fundo e fonte
     system("color 3d");
     
     //Declarando vari�veis
     float carroNovo, carroFabrica;
     
     //
     printf (" \n Digite o valor do custo de f�brica do carro: R$  ");
     scanf("%f", &carroFabrica);  
     
     //
     carroNovo = carroFabrica+(carroFabrica*0.28)+(carroFabrica*0.45);
     
     //
     printf (" Valor do custo final ao cliente �: R$ %.2f \n\n\n", carroNovo);
     
     //Pausando o Programa 
     getch();      
}
