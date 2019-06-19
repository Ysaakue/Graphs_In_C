#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "grafos.h"

void menu(void);

int main()
{
    menu();
}

void menu(void)
{
    graph mapa;
	iniciar(&mapa);
    int opcao,i;
    char origem[30],destino[30];
    int saida,chegada;

    do
    {
        saida=chegada=0;
        system("cls");
        printf("\t\t** Opcoes  **\n");
        printf(" 1 - Procura o menor caminhos no mapa\n");
        printf(" CTRL+c - Sair do programa\n");
        printf(">>> ");
        scanf("%d",&opcao);

        switch (opcao)
        {
            case 1:
                for(i=0;i<quantidade;i++)
                    printf("%d - estado: %s   / sigla: %c%c\n",i,mapa.nos[i].nome,mapa.nos[i].sigla[0],mapa.nos[i].sigla[1]);
                printf("digite o codigo do estado de origem:");
                scanf("%d",&saida);
                printf("digite o codigo do  estado destino:");
                scanf("%d",&chegada);
                // printf("origem: %s\ndestino: %s",origem,destino);
                // for(i=0;i<quantidade;i++)
                // {
                //     if(strcmp(origem,mapa.nos[i].nome)==0 || strcmp(origem,mapa.nos[i].sigla)==0) saida=i;
                //     if(strcmp(destino,mapa.nos[i].nome)==0 || strcmp(destino,mapa.nos[i].sigla)==0) chegada=i;
                //     printf("%d\n",i);
                // }
                printf("\n\norigem: %d\ndestino: %d\n",saida,chegada);
                if(saida == chegada)
                {
                    printf("voce esta no mesmo estado");
                }
                else shortpath(mapa.matriz,mapa.nos,saida,chegada);
                continuar();
                break;
            
            default:
                printf("\n\nOpacao invalida\n\n");
                continuar();
                break;
        }
    } while (opcao!=0);
}