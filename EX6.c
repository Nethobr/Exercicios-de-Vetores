#include <stdio.h> 

void main()
{ 
	//VARS
	int		vet[15],	//Vetor
			i,			//Contador
			x;			//Guarda
	float	calc;		//M�dia
	
	//INICIO
	for (i = 0; i < 15; i++)
	{
		printf("Escreva o n�mero: ");
		scanf("%d", &vet[i]);
		
		calc = calc + vet[i];
	}
	
	calc = calc / 15;
	
	printf ("M�dia: %.2f\n", calc);
	
	for (i = 0; i < 15; i++)
	{
		if (vet[i] >= calc)
		{
			printf("vetor[%d]: %d\n", i, vet[i]);
		}
	}
}
