#include <stdio.h> //bibliot�ca padr�o
#include <math.h>  //bibliot�ca para opera��es matem�ticas

void FuncCalc (int a, int b, int * calc)
{
	*calc = *calc + (a * b);
}	//Fim fun��o de calculo

int main()
{
	//VARI�VEIS
	int			vetA[5],	//Vetor A
				vetB[5],	//Vetor B
				i, j,		//Contadores
				calc = 0;	//Amazena o calculo
	
	//IN�CIO
	for (i = 0; i < 5; i++)
	{
		printf("vetA: ");
		scanf("%d", &vetA[i]);
		
		printf("vetB: ");
		scanf("%d", &vetB[i]);
		
		printf("------\n");
	}	//fim do for
	for (i = 0; i < 5; i++)
	{
		FuncCalc (vetA[i], vetB[i], &calc);
	}	//Fim do for
	
	printf("Calculo final: %d", calc);
	return 0;	
}	//Final main
