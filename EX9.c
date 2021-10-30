#include <stdio.h> 

void FuncDeci (int vet, int * soma)
{
	float	resto;
	
	resto = vet%2;
	
	if (resto == 0 && vet > 0)
	{
		*soma = *soma + vet;
	}
}	//Fim Função de decisão

void main()
{ 
	//VAR'S
	int		vet[1000],	//Vetor
			i,			//Contador
			soma = 0;	//Soma
		
	//INÍCIO
	for (i = 0; i < 1000; i++)
	{
		printf("Valor: ");
		scanf("%d", &vet[i]);
		
		FuncDeci (vet[i], &soma);
	}
	
	printf ("\n");
	
	printf("Soma total dos vetores: %d", soma);
}	//Fim main
