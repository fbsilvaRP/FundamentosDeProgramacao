/*Faça um programa em C que leia dois valores inteiros e positivos, X e Y. Por meio de multiplicações sucessivas, calcule e exiba a função de exponenciação x^y.*/

#include <stdio.h>	//Biblioteca para entrada e saída de dados
#include <stdlib.h>	//Biblioteca para usar a função system("cls")
int main()
{
	system("cls");	//clear screen
	int op = 1;
	while(op == 1)
	{
		int x, y, result = 1;
		printf("\n* * * Exponenciacao X^Y * * * ");
		printf("\nDigite o valor de x: ");
		scanf("%d", &x);
		printf("Agora, digite o valor de Y: ");
		scanf("%d", &y);
		for(int i = 0; i < y; i++)
			result = result * x;	//A cada repetição, o valor é multiplicado por ele mesmo (iniciando por 1)
		printf("%d ^ %d = %d", x, y, result);
		printf("\nDeseja refazer? SIM[1] ou NAO[0] \nR: ");
		scanf("%d", &op);		//Recebe a decisão do usuário para encerrar ou refazer o programa
	}
	return 0;
}