/* Programa que calcula o metro quadrado de uma sala */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) 
{
    //Definindo a localidade
    setlocale(LC_ALL,"Portuguese");
    
    float medida1,medida2,metroQuadrado;//Declarando variáveis do tipo real
    
    // 
    printf ("medidas?\t");
    scanf ("%f %f" , &medida1, &medida2);
    
    // 
    metroQuadrado= medida1*medida2;
    
    // 
    printf ("m²= %.2f\n\n\n" , metroQuadrado);
    
    // 
    system ("pause");
    
    // 
    return 0;
}
