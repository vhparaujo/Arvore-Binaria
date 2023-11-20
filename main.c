#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "arvore_binaria.h"
#include <stdbool.h>

int main() {

    TreeNode* root = NULL;
    ab_insert_node(&root, 4);
    ab_insert_node(&root, 1);
    ab_insert_node(&root, 6);
    ab_insert_node(&root, 3);
    ab_insert_node(&root, 2);
    ab_insert_node(&root, 5);
    ab_insert_node(&root, 7);

    ab_print_preOrder(root);
    printf("\n");
    ab_print_inOrder(root);    
    printf("\n");
    ab_print_posOrder(root);
    printf("\n");


    // buscar na arvore
    int valueToFind = 15;

    // Realizar a busca na árvore
    bool found = ab_search_value(root, valueToFind);

    // Verificar se o valor foi encontrado e retorna 
    if (found) {
        printf("Valor [ %d ] encontrado na árvore.\n", valueToFind); // se condição retornar verdadeiro bool
    } else {
        printf("Valor [ %d ] não encontrado na árvore.\n", valueToFind); // se não 
    }

    exit(0);
}
