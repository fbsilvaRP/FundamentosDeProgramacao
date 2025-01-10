#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	system("cls");
	int op = 1; 
	while(op == 1)
	{
		double result = 0, x = 0;
		printf("\n* * * Calculando ln(x) * * * ");
		printf("\nDigite o valor de x: ");
		scanf("%lf", &x);
		result = log(x);
		printf("ln(%lf) = %lf", x, result);
		printf("\nDeseja refazer? SIM[1] ou NAO[0] \nR: ");
		scanf("%d", &op);
	} 
}