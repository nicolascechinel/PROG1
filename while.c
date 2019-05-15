#include<stdio.h>
#include <stdlib.h>


int main()
{
	int c[10], i;


	for(i=0; i<10;i++)
	{
		printf("\n Digite elemento %d\n", i);
		scanf("%d", &c[i]);
	}
	printf("\n elemento   valor\n");

	for(i=0; i<10; i++)
		printf("%d   %d\n", i, c[i] );



	return 0;
}