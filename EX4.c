#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

int main()
{
	//VARIÁVEIS
	int		notas[4],	//vetor
			i;			//contador
	float	calc = 0;	//calculo
	
	//INÍCIO
	for (i = 0; i < 4; i++)
	{
		printf("Escreva a nota %d: ", i+1);
		scanf("%d", &notas[i]);
		calc = calc + notas [i];
	}
	
	for (i = 0; i < 4; i++)
	{
		printf("Nota %d: %d\n", (i+1), notas[i]);
	}
	
	calc = calc/4;
	
	printf("Média: %.2f", calc);
	return 0;	
}	//Final main
