#include <stdio.h> //bibliot�ca padr�o
#include <math.h>  //bibliot�ca para opera��es matem�ticas

int main()
{
	//VARI�VEIS
	float		vet[10];	//Vetor
	int			i;			//Contador
	
	//IN�CIO
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
