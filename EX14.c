#include <stdio.h> 

void FuncEmbola (int k, int * j, char * vet, int i, int * n1)
{
	*n1 = 0;
	for (i = 0; i < 10; i++)
	{
		*n1 = rand () % k;				//Gera n�mero aleat�rio de acordo com o vetores com os caracter
		
		if (vet[*n1] != '*')			//Verifica se o vetor j� foi usado, e a� imprime ele na tela se n�o, e passa ele como ussado
		{
			printf("%c", vet[*n1]);
			vet[*n1] = '*';	
		}
		else							//Se o vetor j� foi usado, da mais uma chance para o j gerar um velor aleat�rio
		{
			*j+=1;
		}
	}	//Fim for
}

void main()
{
	char vet[10];				//vetor que guarda os caracter
	int i, j = 0, k = 0;		//contadores
	int n1;						//respons�vel pelos n�meros aleat�rios
	
	scanf("%s", &vet);
	
	for (i = 0; i < 10; i++)				//Verifica��o de caracter
	{
		if (vet[i] == 0 || vet [i] == '/')
		{
			k++;
			vet[i] = '*';                                                                        
		}
		else
		{
			j++;
		}
	}	//fim for	

	k = j;
	
	for (i = 0; i < k; i++)					//Fun��o
	{
		FuncEmbola (k, &j, &vet[i], i, &n1);
	}		

}	//Fim main
