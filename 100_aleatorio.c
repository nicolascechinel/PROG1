#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    

    int i, j, n, media, soma=0;
    int cont[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    printf("O programa gera 100 números aleatorios entre 1...10\n");
	srand(time(NULL));
	
	 for(i = 0; i < 100; i++)
   {
       
        printf("Sequencia %d:", i);
		n = 1 + rand() % 10;
        printf("%d  \n", n);
        cont[n-1]++; 
        soma = soma + n;
    }    
	media = soma / 100;    
	for (i=0; i < 10; i++) 
	{
		printf("O numero %d foi gerado %d vezes\n", i+1, cont[i]);
	}	
	printf("\nA media dos numeros eh %d", media);
return 0;
}
