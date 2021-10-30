#include <stdio.h> //bibliotéca padrão

int main()
{
	//VARIÁVEIS
	int vet[5],		//Vetor
		i;			//Contador
	
	//INÍCIO
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
