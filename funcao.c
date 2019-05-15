//Nicolas Cechinel Rosa 18104160
//Lista 2 exercicio 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define resultadosum (num1+num2)
#define resultadosubtrac (num1-num2)
#define resultadomulti num1*num2
#define resultadodiv num1/num2



int soma(double num1, double num2)
{
	printf("O resultado da soma eh:%2.f", resultadosum);
	return 0;
}

int subtrac(double num1, double num2)
{
	printf("O resultado da subtracao eh:%2.f \n", resultadosubtrac);
	return 0;
}

int multi(double num1, double num2)
{
	printf("O resultado da multiplicacao eh:%2.f \n", resultadomulti);
	return 0;
}

int divisao(double num1, double num2)
{
	printf("0 resultado da divisao eh: %2.f \n", resultadodiv);
	return 0;
}

int pot(double num1, double num2)
{
	double potencia =0;
	potencia = pow(num1, num2);
	printf("O resultado da potencia eh:%2.f\n", potencia);
	return 0;
}



int main()
{
	int opc, num1, num2;

	printf("Digite:\n");
	printf("1 – para adição (x+y)\n");
	printf("2 – para subtração (x-y)\n");
	printf("3 – para divisão (x/y)\n");
	printf("4 – para multiplicação (x*y)\n");
	printf("5 – para potência (x^y)\n");












	return 0;
}