#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

int main()
{
	//VARIÁVEIS
	float		vet[10];	//Vetor
	int			i;			//Contador
	
	//INÍCIO
	for (i = 0; i < 10; i++)
	{
		printf("Escreva o vetor: ");
		scanf("%f", &vet[i]);
	}
	
	for (i = 9; i >= 0; i--)
	{
		printf("%.2f\n", vet[i]);
	}
	
	return 0;	
}	//Final main
