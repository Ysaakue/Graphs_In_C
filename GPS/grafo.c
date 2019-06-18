#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "grafos.h"

void menu(void);

main()
{
    graph mapa;
	iniciar(&mapa);
    menu();
}

void menu(void)
{
    int opcao;

    do
    {
        system("cls");
        printf("\t\t** Opcoes  **\n");
        printf(" 1 - Procura o menor caminhos no mapa\n");
        printf(" CTRL+c - Sair do programa\n");
        printf(">>> ");
        scanf("%d",&opcao);

        switch (opcao)
        {
            case 1:
                continuar();
                break;
            
            default:
                printf("\n\nOpacao invalida\n\n");
                continuar();
                break;
        }
    } while (opcao!=0);
}