#include<stdio.h>
#include<stdlib.h>


int main()
{
	const int arraySize = 8; //tamanho do vetor
  	int cand[arraySize];
	int i, v, qtd, sete, total;
	int n = -1;
	float percentage;

	printf("Apuração de votos:\n");
	for ( i = 0; i < arraySize; i++)// inicio array
		{
			cand[i] = 0;
		}
	printf("Escolha a qtd de votos:\n");
	scanf("%d", &qtd);
	printf("Quantos candidatos(max 7):");
	scanf("%d", &sete);
	total = qtd*sete;
		
	for(i = 0; i < qtd; i++)
	{
		
		printf("\n Escolha o candidato(1..5):\n");
		scanf("%d", &v);
		if (v >= 0 && v<=sete)
			cand[v]++;
			else
			cand[0]++;
				
	}
	
	printf("\n Candidato     votos     votos_nulos     porcentagem \n");

	for (i=1; i<arraySize; i++)//imprime o vetor
	 	{
	 	percentage = (total/100);
	 	printf("\n %d                %d                 %d                     %f\n", i, cand[i], cand[0], percentage);
		

		}	
return 0;
}