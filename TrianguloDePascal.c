/*Escreva um programa em C que exiba o triângulo de Pascal. Exercício adaptado do livro Algoritmos e Lógica de Programação: um texto introdutório para a engenharia / Marco Antonio Furlan De Souza -3.ed. - São Paulo, SP:Cengage*/
#include <stdio.h>									//Comandos de entrada e saída de dados
#include <stdlib.h> 									//A biblioteca stdlib inclui o comando system("cls"), o qual limpa o console
int main()
{
	int op = 1; 
	while(op == 1)
	{
		printf("\n* * * * * *  Triangulo de Pascal * * * * * * ");
		int n; 									//Variável p/ armazenar o número de linhas desejada pelo usuário
		printf("\nDigite o numero de linhas desejada:");
		scanf("%d", &n);							//Recebe o valor n do usuário
		for(int linha = 0; linha <= n; linha++)				
		{
			for(int coluna = 0; coluna <= linha; coluna++)			//O número de colunas a ser inserida em cada linha é igual ao número da linha(linha 2, até duas colunas...)
			{
				int nfat = 1, rfat = 1, nrfat = 1, c; 			//nfat: recebe n!, rfat recebe r!, nrfat recebe (n-r)! e c recebe n!/(r! * (n-r)! ) - Cálculo da combinação
				for(int k = 1; k <= linha; k++)
					nfat *= k;
				for(int k = 1; k <= coluna; k++)
					rfat *= k; 
				for(int k = 1; k <= linha - coluna; k++)
					nrfat *= k;    
				c = nfat / (rfat * nrfat); 				//c recebe o cálculo da combinação: C = linha! / (coluna! * (linha - coluna)! )
				printf("   %d   ", c);					//Apresenta o resultado da combinação calculada
			}
			printf("\n");							//Após completar uma linha, salta para a próxima
		}
		printf("* * * * * * * * * * * * * * * * * * * * * * * ");
		printf("\nDeseja refazer? [1]SIM ou [0]NAO\nR: ");
		scanf("%d", &op);							//Verificação para reiniciar o programa
		system("cls");								//Comando para limpar o console
 
		
	}
	return 0;
} 
