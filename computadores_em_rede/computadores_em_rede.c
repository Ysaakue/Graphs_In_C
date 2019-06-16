// DEFINIÇÃOO DE BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FLSH gets(l)

int destino, origem, vertices = 0;
int custo, *custos = NULL; 


// DEFINIÇÃO DE FUNÇÕES ************************************************

void continuar()
{
	puts("\nPRESSIONE ENTER PARA CONTINUAR");
	getchar();
}

//**********************************************************************
void dijkstra(int vertices,int origem,int destino,int *custos)
{
	int i,v, cont = 0;
	int *ant, *tmp;  
	int *z;     /* vertices para os quais se conhece o caminho minimo */
	double min;
	double dist[vertices]; /* vetor com os custos dos caminhos */


	/* aloca as linhas da matriz */
	ant = calloc (vertices, sizeof(int *));
	tmp = calloc (vertices, sizeof(int *));
	if (ant == NULL) {
		printf ("** ERRO: MEMORIA INSUFICIENTE **");
		exit(-1);
	}

	z = calloc (vertices, sizeof(int *));
	if (z == NULL) {
		printf ("** ERRO: MEMORIA INSUFICIENTE **");
		exit(-1);
	}
	
	for (i = 0; i < vertices; i++) 
	{
		if (custos[(origem - 1) * vertices + i] !=- 1)
		{
			ant[i] = origem - 1;
			dist[i] = custos[(origem-1)*vertices+i];
		}
		else
		{
			ant[i]= -1;
			dist[i] = HUGE_VAL;
		}
		z[i]=0;
	}
	z[origem-1] = 1;
	dist[origem-1] = 0;

	/* Laco principal */
	do {
		/* Encontrando o vertice que deve entrar em z */
		min = HUGE_VAL;
		for (i=0;i<vertices;i++)
			if (!z[i])
				if (dist[i]>=0 && dist[i]<min) {
					min=dist[i];v=i;
				}

		/* Calculando as distancias dos novos vizinhos de z */
		if (min != HUGE_VAL && v != destino - 1) {
			z[v] = 1;
			for (i = 0; i < vertices; i++)
				if (!z[i]) {
					if (custos[v*vertices+i] != -1 && dist[v] + custos[v*vertices+i] < dist[i]) {
					   	dist[i] = dist[v] + custos[v*vertices+i];
						ant[i] =v;
				   	}
        		}
		}
	} while (v != destino - 1 && min != HUGE_VAL);

	/* Mostra o Resultado da busca */
	printf("\tDe %d para %d: \t", origem, destino);
	if (min == HUGE_VAL) {
		printf("Nao Existe\n");
		printf("\tCusto: \t- \n");
	}
	else {
		i = destino;
		i = ant[i-1];
		while (i != -1) {
		//	printf("<-%d",i+1);
			tmp[cont] = i+1;
			cont++;
			i = ant[i];
		}
		
		for (i = cont; i > 0 ; i--) {
			printf("%d -> ", tmp[i-1]);
		}
		printf("%d", destino);
		
		printf("\n\tCusto:  %d\n",(int) dist[destino-1]);
	}
}

//**********************************************************************

void rede(void)
{
	int i, j;
	
	do {
		printf("\nINFORME A QUANTIDADE DE COMPUTADORE NA REDE(MIN: 2):");
		scanf("%d",&vertices);
	} while (vertices < 2 );

	if (!custos)free(custos);

	custos = (int *) malloc(sizeof(int)*vertices*vertices);
	for (i = 0; i <= vertices * vertices; i++)
		custos[i] = -1;

	printf("INFORME AS CONEXOES:\n");
	do
	{
		do
		{
			printf("ORIGEM DA CONEXAO (ENTRE 1 E %d OU '0' PARA SAIR): ", vertices);
			scanf("%d",&origem);
		} while (origem < 0 || origem > vertices);

		if (origem)
		{
			do {
				printf("DESTINO DA CONEXAO (ENTRE 1 E %d, MENOS %d): ", vertices, origem);
				scanf("%d", &destino);
			} while (destino < 1 || destino > vertices || destino == origem);

			do {
				printf("LATENCIA DA CONEXAO ENTRE O COMPUTADOR %d E O COMPUTADOR %d: ",
						origem, destino);
				scanf("%d",&custo);
			} while (custo < 0);

			custos[(origem-1) * vertices + destino - 1] = custo;
		}

	} while (origem);
}

//**********************************************************************

int main() 
{ 
	int opcao;


	do {
		system("cls");
	 	printf("             *** MENU PRINCIPAL ***             \n");
        printf("________________________________________________\n");
        printf("| 1) CRIAR REDE DE COMPUTADORES                 |\n");
        printf("| 2) ENCONTRAR MENOR CAMINHO ENTRE DOIS COMPUTA |\n");
		printf("|    DORES                                      |\n");	
        printf("| 0) SAIR                                       |\n");
        printf("|_______________________________________________|\n");
		printf(">>");
		scanf("%d", &opcao);

		switch(opcao)
		{
			case 0: break;

			case 1:
				rede();
				break;

			case 2:
				if(vertices)
				{
					printf("DIGITE A ORIGEM DO PACOTE:");
					scanf("%d", &origem);
					printf("DIGITE O DESTINO DO PACOTE:");
					scanf("%d",&destino);
					dijkstra(vertices, origem,destino, custos);
				}
				else printf("PRIMEIRAMENTE CADASTRE UMA REDE");
				continuar();
				break;

			default:
				printf("   *** OPCAO INVALIDA   ***");
				break;
		}
	}while (opcao != 0);
}
