#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "arvore_binaria.h"
#include <stdbool.h>

int main()
{

    TreeNode *root = NULL;
    int opcao = 1;
    int valor;

    do
    {
        printf("\n/////////////////// MENU ///////////////////\n\n");
        printf("1 - Inserir nó\n");
        printf("2 - Remover nó\n");
        printf("3 - Buscar nó\n");
        printf("4 - Imprimir em ordem\n");
        printf("5 - Imprimir em pos-ordem\n");
        printf("6 - Imprimir em pre-ordem\n");
        printf("7 - Imprimir minimo e maximo\n");
        printf("0 - Sair\n\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            break;
        case 1:
            system("clear"); // No windows tem que ser o "cls"
            printf("Insira um valor para adicionar a seguir: ");
            scanf("%d", &valor);

            ab_insert_node(&root, valor);
            break;
        case 2:
            system("clear"); // No windows tem que ser o "cls"
            printf("Insira um valor para remover: ");
            scanf("%d", &valor);

            ab_remove(&root, valor);

            break;
        case 3:
            system("clear"); // No windows tem que ser o "cls"
            printf("Insira um valor para buscar a seguir: ");
            scanf("%d", &valor);

            bool found = ab_search_value(root, valor);

            // Verificar se o valor foi encontrado e retorna
            if (found)
            {
                printf("\nVerdadeiro (Valor [ %d ] encontrado na árvore.)\n", valor); // se condição retornar verdadeiro bool
            }
            else
            {
                printf("\nFalso (Valor [ %d ] não encontrado na árvore.)\n", valor); // se não
            }
            break;
        case 4:
            system("clear");
            if (root != NULL)
            {
                printf("Sua lista em ordem atual: ");
                ab_print_inOrder(root);
                printf("\n");
            }
            else
            {
                printf("Sua lista esta vazia");
            }
            break;

        case 5:
            system("clear");
            if (root != NULL)
            {
                printf("Sua lista em pos-ordem atual: ");
                ab_print_posOrder(root);
                printf("\n");
            }
            else
            {
                printf("Sua lista esta vazia");
            }
            break;

        case 6:
            system("clear");
            if (root != NULL)
            {
                printf("Sua lista em pre-ordem atual: ");
                ab_print_preOrder(root);
                printf("\n");
            }
            else
            {
                printf("Sua lista esta vazia");
            }
            break;

        case 7:
            system("clear");
            ab_min_value(root);
            ab_max_value(root);
            break;

        default:
            break;
        }

    } while (opcao != 0);


    exit(0);
}
