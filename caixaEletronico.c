/* Escreva um programa que apresente quatro opções: (a) consulta saldo, (b) saque e (c) depósito e (d) sair. O saldo deve iniciar em R$ 0,00. A cada saque ou depósito o valor do saldo deve ser atualizado.*/
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
 
main()
{
     float saldo=0,saque=0,deposito=0; //Declarando variáveis de tipo real
     char op; //Declarando variáveis tipo caractere
      
 
     //Definindo a nacionalidade
     setlocale(LC_ALL,"Portuguese");
 
     //Definindo cor do plano de fundo e fonte
     system("color 0d");
      
     // 
	 printf("                          _____      _           \n");
	 printf("                         / ____|    (_)          \n");
	 printf("                        | |     __ _ ___  ____ _ \n");
	 printf("                        | |    / _` | \\ \\/ / _` |\n");
	 printf("                        | |___| (_| | |>  < (_| |\n");
	 printf("                         \\_____\\__,_|_/_/\\_\\__,_|\n");
	 printf("                                                 \n");
       
     
	 printf("               ______ _      _                   _           \n");
     printf("              |  ____| |    | |                 (_)          \n");
	 printf("              | |__  | | ___| |_ _ __ ___  _ __  _  ___ ___  \n");
	 printf("              |  __| | |/ _ \\ __| '__/ _ \\| '_ \\| |/ __/ _ \\ \n");
	 printf("              | |____| |  __/ |_| | | (_) | | | | | (_| (_) |\n");
	 printf("              |______|_|\\___|\\__|_|  \\___/|_| |_|_|\\___\\___/ \n\n\n\n\n\n");

     getche();

     // 
     printf("\n\n [a]---consulta saldo   [b]---saque \n [c]---deposito         [d]---sair \n\n\n");
     printf("Escolha uma opção para prosseguir ... ");
     scanf("%s",&op);
     
	 //  
     do
     {       
	     if(toupper(op=='a'))
         { 
        	 printf("\n Saldo: R$ %.2f. \n",saldo);
             getche();
             
             printf("\n\n\nEscolha uma opção para prosseguir ... ");
             scanf("%s",&op); 
         }
         else if(toupper(op=='b'))
         {
        	 printf("\n Digite o valor do saque: R$  ");
             scanf("%f",&saque);
             saldo=saldo-saque;
             getche();
                     
             printf("\n\n\nEscolha uma opção para prosseguir ... ");
             scanf("%s",&op); 
         }
         else if(toupper(op=='c'))
         {
             printf("\n Digite o valor à ser depositado: R$  ");
             scanf("%f",&deposito);
             saldo=saldo+deposito;
             getche();
                     
             printf("\n\n\nEscolha uma opção para prosseguir ... ");
             scanf("%s",&op); 
         }
         else if (toupper(op=='d'))
         {
             printf("\n Saindo do sistema... \n");
         }
                
     }
     while (op=='a' || op=='b' || op=='c'  );
         
     //Pausando o Programa sem aparecer a mensagem "Pressione qualquer tecla para continuar"
     getche();
}
