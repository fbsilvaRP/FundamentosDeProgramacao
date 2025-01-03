#include <stdio.h>	//Biblioteca de entrada e saída de dados 
#include <stdlib.h>	//Biblioteca p/ usar a função system("cls")
int main()
{
	int op = 1;
	while(op == 1)
	{
		int n;
		printf("\n* * * Decompondo um numero em seus fatores primos * * * "); 
		printf("\nDigite o numero que deseja decompor: ");
		scanf("%d", &n);							//Recebe o número do usuário
		int aux = n; 							//A variável aux recebe o numero digitado, a qual será modificada
		int primo = 2; 							//A variável "primo" irá receber os números primos que antecedem o número digitado a cada repetição
		int c1 = 1; 							//A variável c1 irá ser utilizada para testar sua divisibilidade 
		do
		{
			int c2 = 1;
			int contador = 0;
			while(c2 <= c1)
			{
				int res;
				res = c1 % c2; 					//Se o resto "res" da divisão for igual a zero, assume-se que c2 é um divisor de c1 e, logo, a variável "contador" é incrementada
				if(res == 0)
					contador++;					//A variável "contador" indica a quantidade de divisores que foram encontrados de c1 
				c2++;
			}
			if(contador == 2)						//Se a quantidade de divisores for igual a 2, assume-se que c1 é um número primo e, portanto, pode dividr o número n digitado
			{
				int resto;
				resto = aux % c1;					//Caso o resto da divisão do número pelo primo c1 encontrado for zero, pode-se dizer c1 é divisor de n
				if(resto == 0)
				{
					aux = aux / c1;
					 
				}
			}
			c1++;
				 
		}
		while(aux != 1);  
		printf("\nDeseja reiniciar? [1]SIM ou [0]NAO\nR:");
		scanf("%d", &op);
		system("cls");   							//Função para apagar o console "cls" - Clear screen 
	} 
}