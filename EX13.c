#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

int main()
{
	//VARIÁVEIS
	int			vet[5],		//Vetor
				vetArm [5],	//Vetor de armazenamento
				i, j =-1;	//Contadores
	
	//INÍCIO
	for (i = 0; i < 5; i++)
	{
		printf("Valor: ");
		scanf("%d", &vet[i]);
		
		if (vet[i] > vet[j])
		{
			printf("Amazenou!\n\n");
			vetArm[i] = vet[i];
		}
		else if (vet[i] == vet[0])
		{
			printf("Amazenou!\n\n");
			vetArm[i] = vet[i];
		}
		else
		{
			vetArm[i] = 0;
			printf("\n");
		}
		j++;
	}	//Fim for
	
	j = 0;
	printf("Armazenados: ");
	for (i = 0; i < 5; i++)
	{
		if (vetArm[i] != 0)
		{	
			printf("%d ", vetArm[i]);
		}
	}	//Fim for

	return 0;	
}	//Final main
