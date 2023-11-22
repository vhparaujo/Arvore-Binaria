#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "arvore_binaria.h"

int main() {

    TreeNode* root = NULL;
    ab_insert_node(&root, 50);
    ab_insert_node(&root, 60);
    ab_insert_node(&root, 30);
    ab_insert_node(&root, 10);
    ab_insert_node(&root, 20);
    ab_insert_node(&root, 40);
    ab_insert_node(&root, 70);
    ab_insert_node(&root, 65);


    ab_print_preOrder(root);
    printf("\n");
    ab_print_inOrder(root);    
    printf("\n");
    ab_print_posOrder(root);
    printf("\n");

    ab_min_value(root);
    printf("\n");
    ab_max_value(root);

    ab_remove(&root, 90);
    ab_remove(&root, 30);
    ab_print_preOrder(root);
    ab_remove(&root, 70);
    ab_print_preOrder(root);
    exit(0);
}
