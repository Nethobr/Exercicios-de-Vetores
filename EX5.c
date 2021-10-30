#include <stdio.h> 

int FuncCalc (int vet)
{
	vet = vet%2;
	return vet;
}

void main()
{ 
	//VAR
	int		vet[20],		//vetor principal
			par[20],		//vetor par
			impar[20],		//vetor impar
			i,				//contador
			x;				//decisão
	
	//INICIO
	for (i = 0; i < 20; i++)
	{
		printf("Escreva o valor: ");
		scanf("%d", &vet[i]);
		
		x = FuncCalc (vet[i]);
		
		if (x == 0)
		{
			par[i] = vet[i];
			impar[i] = 0;
		}
		else
		{
			impar[i] = vet[i];
			par[i] = 0;
		}	
	}
	
	printf("-------------------------------\n");
	
	for (i = 0; i < 20; i++)
	{
		printf("Vetor: %d\nPar: %d\nImpar: %d\n\n", vet[i], par[i], impar[i]);
	}
}
