#include <stdio.h> //bibliot�ca padr�o
#include <math.h>  //bibliot�ca para opera��es matem�ticas

int main()
{
	//VARI�VEIS
	int		notas[4],	//vetor
			i;			//contador
	float	calc = 0;	//calculo
	
	//IN�CIO
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
	
	printf("M�dia: %.2f", calc);
	return 0;	
}	//Final main
