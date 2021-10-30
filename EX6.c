#include <stdio.h> 

void main()
{ 
	//VARS
	int		vet[15],	//Vetor
			i,			//Contador
			x;			//Guarda
	float	calc;		//Média
	
	//INICIO
	for (i = 0; i < 15; i++)
	{
		printf("Escreva o número: ");
		scanf("%d", &vet[i]);
		
		calc = calc + vet[i];
	}
	
	calc = calc / 15;
	
	printf ("Média: %.2f\n", calc);
	
	for (i = 0; i < 15; i++)
	{
		if (vet[i] >= calc)
		{
			printf("vetor[%d]: %d\n", i, vet[i]);
		}
	}
}
