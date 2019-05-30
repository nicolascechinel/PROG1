#include <stdio.h>      
#include <stdlib.h>     


            
int Contador(void);


int main()
{
    int d;
    // Mostra 20 interações do Contador 
    for(d=0; d<20; d++)
        printf("\n%i",Contador());
    getchar();      // Pausa o programa 
    return(0);
}

        
int Contador(void)
{
    
    static unsigned short conta=5;  //conta e declarada como inteira sem sinal e com a metade do alcance Z+
    if(conta)   // Verifica-se e diferente de zero 
        conta--;
    else
        conta=5;
    return(conta);  // Retorna o valor 
}
