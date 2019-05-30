#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Jogo advinhe o numero
//Nicolas Cechinel Rosa 18104160

int random1();
int random2();
int random3();
int random4();
int random5();
int random6();
int random7();
int random8();
int random9();
int random10();

void dicas(int number, int password, int attempt);

int main()
{
    int continuar=1,
        password,
        attempt,
        number,
        level;

    do
    {
   
        
        
		
		printf("Escolha o nivel 1....10\n");
		scanf("%d", &level);
		
		switch(level)
		{
			case 1:
			password = random1();
			printf("Sorteando numero entre 1 e 1000...\n");
			break;
			case 2:
			password = random2();
			printf("Sorteando numero entre 1 e 2000...\n");
			break;
			case 3: 
			password = random3();
			printf("Sorteando numero entre 1 e 3000...\n");
			break;
			case 4:
			password = random4();
			printf("Sorteando numero entre 1 e 4000...\n");
			break;
			case 5:
			password = random5();
			printf("Sorteando numero entre 1 e 5000...\n");
			break;
			case 6:
			password = random6();
			printf("Sorteando numero entre 1 e 6000...\n");
			break;
			case 7: 
			password = random7();
			printf("Sorteando numero entre 1 e 7000...\n");
			break;
			case 8:
			password = random8();
			printf("Sorteando numero entre 1 e 8000...\n");
			break;
			case 9:
			password = random9();
			printf("Sorteando numero entre 1 e 9000...\n");
			break;
			case 10:
			password = random10();
			printf("Sorteando numero entre 1 e 10000...\n");
			break;
		}
        printf("Comecou! Tente adivinhar o numero!\n\n");
        attempt = 0;

        do
        {
            attempt++;
            printf("Tentativa %d: ", attempt);
            scanf("%d", &number);
            dicas(number,password,attempt);
        }
        while( number != password);

        printf("Digite 0 para sair, ou qualquer outro numero para continuar: ");
        scanf("%d", &continuar);
    }
    while(continuar);

}

int random1()
{
    srand(time(NULL));

    return (1 + rand()%1000);
}

int random2()
{
    srand(time(NULL));

    return (1 + rand()%2000);
}

int random3()
{
    srand(time(NULL));

    return (1 + rand()%3000);
}

int random4()
{
    srand(time(NULL));

    return (1 + rand()%4000);
}
int random5()
{
    srand(time(NULL));

    return (1 + rand()%5000);
}

int random6()
{
    srand(time(NULL));

    return (1 + rand()%6000);
}

int random7()
{
    srand(time(NULL));

    return (1 + rand()%7000);
}

int random8()
{
    srand(time(NULL));

    return (1 + rand()%8000);
}
int random9()
{
    srand(time(NULL));

    return (1 + rand()%9000);
}
int random10()
{
    srand(time(NULL));

    return (1 + rand()%10000);
}


void dicas(int number, int password, int attempt)
{
    if(number > password)
                printf("O numero sorteado e menor que %d\n\n", number);
    else
        if(number < password)
            printf("O numero sorteado e maior que %d\n\n", number);
        else
            printf("Parabens! Voce acertou o numero em %d tentativas!\n\n", attempt);
}
