#include <stdio.h> //bibliot�ca padr�o
#include <math.h>  //bibliot�ca para opera��es matem�ticas

int main()
{
	//VARI�VEIS
	int			vet[5],		//Vetor
				vetArm [5],	//Vetor de armazenamento
				i, j =-1;	//Contadores
	
	//IN�CIO
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
