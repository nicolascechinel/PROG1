#include <stdio.h>


int inCircle(float x_point, float y_point, float x_c, float y_c, float r, int total)
{
	if( ((x_point - x_c)*2 + (y_point - y_c)*2) <= (r*r) )
		total=1;
	else
		total=0;
}

int main()
{
	float x_point, y_point, r, x_c, y_c;
	int total;
    printf("Informe o valor de X Point: ");
    scanf("%f", &x_point);
    printf("Informe o valor de y Point: ");
    scanf("%f", &y_point);
    printf("Informe o valor de X c: ");
    scanf("%f", &x_c);
    printf("Informe o valor de y c: ");
    scanf("%f", &y_c);
    printf("Informe o valor de R: ");
    scanf("%f", &r);
    inCircle(x_point, y_point, x_c, y_c, r, total);
    printf("%d", total);
	
	
	
	return 0;
}
