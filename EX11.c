#include <stdio.h> //bibliot�ca padr�o
#include <math.h>  //bibliot�ca para opera��es matem�ticas

int main()
{
	//VARI�VEIS
	int		vetA[10],	//Vetor A
			vetB[10],	//Vetor B
			i, j = 0;	//Contadores
	
	//IN�CIO
	for (i = 0; i < 10; i++)
	{
		printf("Escreva o valor: ");
		scanf("%d", &vetA[i]);
		
		vetB[i] = vetA[i];
	}
	
	printf("\n");
	
	for (i = 9; i >= 0; i--)
	{
		printf("vet A: %d -> vetB: %d\n", vetA[j], vetB[i]);
		j++;
	}
	return 0;	
}	//Final main
