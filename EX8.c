#include <stdio.h> 

void FuncN (int vet, int n, int*j)
{
	if (vet == n)
	{
		*j += 1;
	}
}	//Fun��o de paremetro por REF com J

void main()
{ 
	//VAR'S
	int		vet[50],			//Vetor
			n,				//N�mero N
			i,				//Contador
			j = 0;			//Contador de N
	
	//IN�CIO
	for (i = 0; i < 50; i++)
	{
		printf("Valor: ");
		scanf("%d", &vet[i]);
	}
	
	printf("Escreva o n�mero N: ");
	scanf("%d", &n);
	
	for (i = 0; i < 50; i++)
	{
		FuncN (vet[i], n, &j);
	}
	
	printf("Quantidade: %d", j);
}	//Fim main
