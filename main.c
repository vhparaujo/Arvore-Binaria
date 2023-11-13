#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "arvore_binaria.h"

int main() {

    TreeNode* root = NULL   ;
    ab_insert_node(&root, 2);
    ab_insert_node(&root, 7);
    ab_insert_node(&root, 5);
    ab_insert_node(&root, 8);
    ab_insert_node(&root, 78);
    ab_insert_node(&root, 56);
    ab_insert_node(&root, 12);
    ab_insert_node(&root, 70);
    ab_insert_node(&root, 54);

    ab_print_inOrder(root);

    exit(0);
}
