#include <stdio.h> //bibliot�ca padr�o

int main()
{
	//VARI�VEIS
	int vet[5],		//Vetor
		i;			//Contador
	
	//IN�CIO
	for(i = 0; i < 5; i++)
	{
		printf("Escreva o valor do vetor: ");
		scanf("%d", &vet[i]);				
	}
	
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", vet[i]);
	}
	return 0;	
}	//fim main
