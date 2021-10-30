#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

void FuncCalc (int a, int b, int * calc)
{
	*calc = *calc + (a * b);
}	//Fim função de calculo

int main()
{
	//VARIÁVEIS
	int			vetA[5],	//Vetor A
				vetB[5],	//Vetor B
				i, j,		//Contadores
				calc = 0;	//Amazena o calculo
	
	//INÍCIO
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
