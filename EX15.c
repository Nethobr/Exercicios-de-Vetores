#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

void FuncCalcSalto (float vet, float * max, float * min)								//Função do calculo do maior e menor salto
{	
	if (*max < vet || *max == 0)
	{
		*max = vet;
	}	//fim if
	
	if (*min > vet || *min == 0)
	{
		*min = vet;
	}	//fim if
}

int main()
{
	//VARIÁVEIS
	char		nome [10] = {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*',};		//nome inicial
	int			i;				//contadores
	float		salto[5];		//vetor de salto
	float 		max = 0,		//maior valor
				min = 0,		//menor valor
				calc = 0;		//armazena o calculo
				 
	//INÍCIO

	printf("Escreva o nome do atleta: ");			
	scanf(" %s", &nome);


	for (i = 0; i < 5; i++)
	{
		printf("%d - salto: ", i+1);
		scanf("%f", &salto[i]);
	}	//fim for

	printf("-------------------------\n");

	for (i = 0; i < 5; i++)
	{
		FuncCalcSalto (salto[i], &max, &min);	
	}	//fim for
	
	printf ("Atleta: ");							//mostra o nome do atleta
	
	for (i = 0; i < 10; i++)
	{
		if (nome[i] == 0 || nome[i] == '/')
		{
			nome[i] = '*';
		}	//fim if
	}	//fim for
	
	for (i = 0; i < 10; i++)
	{
		if (nome [i] != '*')
		{
			printf("%c", nome[i]);
		}	//fim if
	}	//fim for
	
	printf("\n");

	printf ("Selecionados: ");						//saltos selecionados
	for (i = 0; i < 5; i++)
	{
		if (salto [i] != max && salto [i] != min)
		{
			printf ("%.2f ", salto [i]);
			calc = calc + salto [i];
		}	//fim if
	}	//fim for
	
	calc = calc / 3;								//média
	printf ("\nMédia dos saltos: %.2fm", calc);	
	return 0;	
}	//Final main
