// DEFINIÇÃOO DE BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

// DEFINES PARA OS ESTADOS
#define quantidade 26

#define Acre 0
#define AC 0

#define Alagoas 1 
#define AL 1

#define Amapa 2
#define AP 2

#define Amazonas 3
#define AM 3

#define Bahia 4
#define BA 4

#define Ceara 5
#define CE 5

#define Espirito_Santo 6
#define ES 6

#define Goias 7
#define GO 7

#define Maranhao 8
#define MA 8

#define Mato_Grosso 9
#define MT 9

#define Mato_Grosso_do_Sul 10
#define MS 10

#define Minas_Gerais 11
#define MG 11

#define Para 12
#define PA 12

#define Paraiba 13
#define PB 13

#define Parana 14
#define PR 14

#define Pernambuco 15
#define PE 15

#define Piaui 16
#define PI 16

#define Rio_de_Janeiro 17
#define RJ 17

#define Rio_Grande_do_Norte 18
#define RN 18

#define Rio_Grande_do_Sul 19
#define RS 19

#define Rondonia 20
#define RO 20

#define Roraima 21
#define RR 21

#define Santa_Catarina 22
#define SC 22

#define Sao_Paulo 23
#define SP 23

#define Sergipe 24
#define SE 24

#define Tocantins 25
#define TO 25

// DEFINIÇÃOO DA STRUCT
typedef struct
{
	char nome[20];
	char sigla[2];
} no;

typedef struct
{
	bool adj;
	int distancia;
}arco;

typedef struct
{
	no nos[quantidade];
	arco matriz[quantidade][quantidade];
} graph;

// DEFINIÇÃO DE FUNÇÕES ************************************************

void continuar()
{
	puts("\nPRESSIONE ENTER PARA CONTINUAR");
	getchar();
}

//**********************************************************************

void iniciar(graph *grafo)
{
	int x,y;

	strcpy(grafo->nos[0].nome,"Acre");
	strcpy(grafo->nos[0].sigla,"AC");
	
	strcpy(grafo->nos[1].nome,"Alagoas");
	strcpy(grafo->nos[1].sigla,"AL");
	
	strcpy(grafo->nos[2].nome,"Amapa");
	strcpy(grafo->nos[2].sigla,"AP");

	strcpy(grafo->nos[3].nome,"Amazonas");
	strcpy(grafo->nos[3].sigla,"AM");
	
	strcpy(grafo->nos[4].nome,"Bahia");
	strcpy(grafo->nos[4].sigla,"BA");
	
	strcpy(grafo->nos[5].nome,"Ceara");
	strcpy(grafo->nos[5].sigla,"CE");
	
	strcpy(grafo->nos[6].nome,"Espirito Santo");
	strcpy(grafo->nos[6].sigla,"ES");
	
	strcpy(grafo->nos[7].nome,"Goias");
	strcpy(grafo->nos[7].sigla,"GO");
	
	strcpy(grafo->nos[8].nome,"Maranhao");
	strcpy(grafo->nos[8].sigla,"MA");

	strcpy(grafo->nos[9].nome,"Mato Grosso");
	strcpy(grafo->nos[9].sigla,"MT");

	strcpy(grafo->nos[10].nome,"Mato Grosso do sul");
	strcpy(grafo->nos[10].sigla,"MS");

	strcpy(grafo->nos[11].nome,"Minas Gerais");
	strcpy(grafo->nos[11].sigla,"MG");

	strcpy(grafo->nos[12].nome,"Para");
	strcpy(grafo->nos[12].sigla,"PA");

	strcpy(grafo->nos[13].nome,"Paraiba");
	strcpy(grafo->nos[13].sigla,"PB");

	strcpy(grafo->nos[14].nome,"Parana");
	strcpy(grafo->nos[14].sigla,"PR");

	strcpy(grafo->nos[15].nome,"Pernambuco");
	strcpy(grafo->nos[15].sigla,"PE");

	strcpy(grafo->nos[16].nome,"Piaui");
	strcpy(grafo->nos[16].sigla,"PI");

	strcpy(grafo->nos[17].nome,"Rio de Janeiro");
	strcpy(grafo->nos[17].sigla,"RJ");

	strcpy(grafo->nos[18].nome,"Rio Grande do Norte");
	strcpy(grafo->nos[18].sigla,"RN");

	strcpy(grafo->nos[19].nome,"Rio Grande do Sul");
	strcpy(grafo->nos[19].sigla,"RS");

	strcpy(grafo->nos[20].nome,"Rondonia");
	strcpy(grafo->nos[20].sigla,"RO");

	strcpy(grafo->nos[21].nome,"Roraima");
	strcpy(grafo->nos[21].sigla,"RR");

	strcpy(grafo->nos[22].nome,"Santa Catarina");
	strcpy(grafo->nos[22].sigla,"RC");

	strcpy(grafo->nos[23].nome,"Sao Paulo");
	strcpy(grafo->nos[23].sigla,"SP");

	strcpy(grafo->nos[24].nome,"Sergipe");
	strcpy(grafo->nos[24].sigla,"SE");

	strcpy(grafo->nos[25].nome,"Tocantins");
	strcpy(grafo->nos[25].sigla,"TO");

	x=Acre;
	for(y=0;y<quantidade;y++)
	{
		if(y == Amazonas)
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 830;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Alagoas;
	for(y=0;y<quantidade;y++)
	{
		if(y == Bahia )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 1024;
		}
		else if(y == Pernambuco )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 87;
		}
		else if(y == Sergipe )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 144;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Amapa;
	for(y=0;y<quantidade;y++)
	{
		if(y ==Para)
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 855;
		}
		else grafo->matriz[x][y].adj=false;
	}
	
	x=Amazonas;
	for(y=0;y<quantidade;y++)
	{
		if(y == Acre )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 830;
		}
		else if(y == Roraima )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 741;
		}
		else if(y == Para )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 1490;
		}
		else if(y == Mato_Grosso )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 1424;
		}
		else if(y == Rondonia )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 934;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Bahia;
	for(y=0;y<quantidade;y++)
	{
		if(y == Sergipe )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 425;
		}
		else if(y == Alagoas )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 533;
		}
		else if(y == Pernambuco )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 555;
		}
		else if(y == Piaui )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 402;
		}
		else if(y == Tocantins )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 794;
		}
		else if(y == Goias )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 996;
		}
		else if(y == Minas_Gerais )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 774;
		}
		else if(y == Espirito_Santo )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 871;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Ceara;
	for(y=0;y<quantidade;y++)
	{
		if(y == Piaui )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 529;
		}
		else if(y == Pernambuco )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 452;
		}
		else if(y == Paraiba )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 341;
		}
		else if(y == Rio_Grande_do_Norte )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 286;
		}
		else grafo->matriz[x][y].adj=false;
	}
	
	x=Espirito_Santo;
	for(y=0;y<quantidade;y++)
	{
		if(y == Bahia )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 871;
		}
		else if(y == Minas_Gerais )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 393;
		}
		else if(y == Rio_de_Janeiro )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 512;
		}
		else grafo->matriz[x][y].adj=false;
	}
	
	x=Goias;
	for(y=0;y<quantidade;y++)
	{
		if(y == Mato_Grosso_do_Sul )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 812;
		}
		else if(y == Minas_Gerais )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 715;
		}
		else if(y == Bahia )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 1084;
		}
		else if(y == Tocantins )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 764;
		}
		else if(y == Mato_Grosso )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 812;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Maranhao;
	for(y=0;y<quantidade;y++)
	{
		if(y == Piaui )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 376;
		}
		else if(y == Tocantins )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 533;
		}
		else if(y == Para )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 824;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Mato_Grosso;
	for(y=0;y<quantidade;y++)
	{
		if(y == Rondonia )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 824;
		}
		else if(y == Amazonas )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 736;
		}
		else if(y == Para )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 1424;
		}
		else if(y == Tocantins )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 1021;
		}
		else if(y == Goias )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 882;
		}
		else if(y == Mato_Grosso_do_Sul )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 928;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Mato_Grosso_do_Sul;
	for(y=0;y<quantidade;y++)
	{
		if(y == Mato_Grosso )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 928;
		}
		else if(y == Goias )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 726;
		}
		else if(y == Minas_Gerais )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 1196;
		}
		else if(y == Sao_Paulo )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 893;
		}
		else if(y == Parana )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 573;
		}
		else grafo->matriz[x][y].adj=false;
	}
	
	x=Minas_Gerais;
	for(y=0;y<quantidade;y++)
	{
		if(y == Rio_de_Janeiro )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 565;
		}
		else if(y == Espirito_Santo )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 393;
		}
		else if(y == Bahia )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 774;
		}
		else if(y == Goias )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 1021;
		}
		else if(y == Mato_Grosso_do_Sul )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 882;
		}
		else if(y == Sao_Paulo )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 928;
		}
		else grafo->matriz[x][y].adj=false;
	}
	
	x=Para;
	for(y=0;y<quantidade;y++)
	{
		if(y == Maranhao )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 824;
		}
		else if(y == Tocantins )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 726;
		}
		else if(y == Mato_Grosso )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 856;
		}
		else if(y == Amazonas )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 1490;
		}
		else if(y == Roraima )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 1347;
		}	
		else grafo->matriz[x][y].adj=false;
	}

	x=Paraiba;
	for(y=0;y<quantidade;y++)
	{
		if(y == Rio_Grande_do_Norte )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 150;
		}
		else if(y == Ceara )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 341;
		}
		else if(y == Pernambuco )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 177;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Parana;
	for(y=0;y<quantidade;y++)
	{
		if(y == Mato_Grosso_do_Sul )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 573;
		}
		else if(y == Sao_Paulo )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 575;
		}
		else if(y == Santa_Catarina )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 325;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Pernambuco;
	for(y=0;y<quantidade;y++)
	{
		if(y == Ceara )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 452;
		}
		else if(y == Paraiba )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 177;
		}
		else if(y == Piaui )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 687;
		}
		else if(y == Sergipe )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 215;
		}
		else if(y == Bahia )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 555;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Piaui;
	for(y=0;y<quantidade;y++)
	{
		if(y == Ceara )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 529;
		}
		else if(y == Pernambuco )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 687;
		}
		else if(y == Bahia )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 402;
		}
		else if(y == Tocantins )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 566;
		}
		else if(y == Maranhao )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 376;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Rio_de_Janeiro;
	for(y=0;y<quantidade;y++)
	{
		if(y == Espirito_Santo )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 512;
		}
		else if(y == Minas_Gerais )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 557;
		}
		else if(y == Sao_Paulo )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 360;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Rio_Grande_do_Norte;
	for(y=0;y<quantidade;y++)
	{
		if(y == Ceara )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 263;
		}
		else if(y == Paraiba )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 150;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Rio_Grande_do_Sul;
	for(y=0;y<quantidade;y++)
	{
		if(y==Santa_Catarina)
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 450;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Rondonia;
	for(y=0;y<quantidade;y++)
	{
		if(y == Mato_Grosso )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 736;
		}
		else if(y == Amazonas )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 934;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Roraima;
	for(y=0;y<quantidade;y++)
	{
		if(y == Amazonas )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 741;
		}
		else if(y == Para )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 1347;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Santa_Catarina;
	for(y=0;y<quantidade;y++)
	{
		if(y == Parana )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 283;
		}
		else if(y == Rio_Grande_do_Sul )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 490;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Sao_Paulo;
	for(y=0;y<quantidade;y++)
	{
		if(y == Rio_de_Janeiro )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 360;
		}
		else if(y == Minas_Gerais )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 694;
		}
		else if(y == Mato_Grosso_do_Sul )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 893;
		}
		else if(y == Parana )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 575;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Sergipe;
	for(y=0;y<quantidade;y++)
	{
		if(y == Alagoas )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 144;
		}
		else if(y == Bahia )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 425;
		}
		else grafo->matriz[x][y].adj=false;
	}

	x=Tocantins;
	for(y=0;y<quantidade;y++)
	{
		if(y == Bahia )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 794;
		}
		else if(y == Maranhao )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 743;
		}
		else if(y == Para )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 604;
		}
		else if(y == Mato_Grosso )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 1021;
		}
		else if(y == Goias )
		{
			grafo->matriz[x][y].adj = true;
			grafo->matriz[x][y].distancia = 527;
		}
		else grafo->matriz[x][y].adj=false;
	}
	printf("feito");
}

//**********************************************************************

void shortpath(int distanciasCidades[][quantidade], int *nos, int origem, int destino)
{
	int caminho[quantidade],conhecidos[quantidade],distancia[quantidade];
	int atual,i,k,distancia_atual,min,novadistancia,z;

	for(i=0;i<quantidade;i++)
	{
		conhecidos[i] = 0;
		distancia[i] = __INT_MAX__;
	}
	conhecidos[origem]=1;
	atual = origem;

	while(atual != destino)
	{
		min=__INT_MAX__;
		distancia_atual=distancia[atual];

		for(i=0;i<quantidade;i++)
			if(conhecidos[i] == 0)
			{
				novadistancia = distancia_atual + distanciasCidades[atual][i];

				if(novadistancia < distancia[i])
				{
					distancia[i] = novadistancia;
					caminho[i] = atual;
				}
				if(distancia[i] < min)
				{
					min = distancia[i];
					k=i;
				}
			}
		atual = k;
		conhecidos[atual] = 1;
	}
	printf(" A distancia minima entre %s e %s eh %d km",nos[origem],nos[destino],distancia[destino]);
	printf("caminho: ");
	for(z=0;z<i;z++)
	{
		printf("%s ->",caminho[z]);
	}
	printf("%s ->",caminho[destino]);
}