#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "arvore_binaria.h"

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

    ab_min_value(root);
    printf("\n");
    ab_max_value(root);
    printf("\n");

    exit(0);
}
