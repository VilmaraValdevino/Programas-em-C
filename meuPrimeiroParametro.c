//aprendendo sobre parametros
// programa que faz uma soma usando parametros 
 
#include <stdio.h>
#include <locale.h>
 
int a,b; // declarando variaveis(GLOBAIS) para serem atribuidas � n�meros da opera��o.
 
//criando meu metodo/funcao
vilmara(a,b)
{
    
    //Definindo a  nacionalidade
    setlocale(LC_ALL, "Portuguese");
  
    //
    printf ("Digite o primeiro valor: \t ");
    scanf ("%d", &a);
    
    //
    printf ("Digite o segundo valor: \t ");
    scanf ("%d", &b);
    
    //
    printf ("\n\n Sua soma � : \n %d + %d = %d", a,b,a+b);
    
}
 
//Programa principal
main()
{
   // chamando/instanciando o metodo
   vilmara(a,b);
   
   //pausando o programa(n�o exibe a frase para continuar)
   getche();
   
}
