#include <stdio.h>
 
void main()
{ 
	//VAR'S
	int 	normal[20],	//Vetor normal
			dobro[20],	//Vetor com o dobro
			i;			//Contador
	
	//IN�CIO
	for (i = 0; i < 20; i++)
	{
		printf("Escreva o vetor: ");
		scanf("%d", &normal[i]);
		
		dobro[i] = normal[i] * 2;
	}
	
	printf("\n");
	
	for (i = 0; i < 20; i++)
	{
		printf("Dorbro da posi��o %d: de %d para %d\n", i, normal[i], dobro[i]);
	}
	
}
