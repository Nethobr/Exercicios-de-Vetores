#include <stdio.h> 

void FuncDeci (int vet, int * b)
{
	int i;
	
	for (i = 0; i < 3; i++)
	{
		if (b[1] > vet || b[1] == 0)
		{
			b[1] = vet;
		}
		else if (b[0] < vet || b[0] == 0)
		{
			b[0] = vet;
		}
	}	//Fim do for
}	//Fim da função de decisão

void main()
{ 
	//VAR'S
	int		a[30],	//Vetor A
			b[3],	//Vetor B
			i;		//Contador 1
	
	//INÍCIO
	b[2] = 0;
	for (i = 0; i < 30; i++)
	{
		printf("%d - Escreva o valor: ", i+1);
		scanf("%d", &a[i]);

		FuncDeci (a[i], &b[0]);
		b[2] = b[2] + a[i];
	}	//Fim do for
	printf("\n");
	for (i = 1; i <= 3; i++)
	{
		switch (i)
		{
			case 1:
				printf("Maior elemento: %d\n", b[0]);
			break;
			
			case 2:
				printf("Menor elemento: %d\n", b[1]);
			break;
			
			case 3:
				printf("Soma total dos elementos: %d\n", b[2]);
			break;
			
			default:
				printf("Ocorreu um erro!\n");
		}	//Fim do switch
	}	//Fim dor fot
}	//Fim do main
