/* O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e 
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
     
     //Declarando variáveis
     float carroNovo, carroFabrica;
     
     //
     printf (" \n Digite o valor do custo de fábrica do carro: R$  ");
     scanf("%f", &carroFabrica);  
     
     //
     carroNovo = carroFabrica+(carroFabrica*0.28)+(carroFabrica*0.45);
     
     //
     printf (" Valor do custo final ao cliente é: R$ %.2f \n\n\n", carroNovo);
     
     //Pausando o Programa 
     getch();      
}
