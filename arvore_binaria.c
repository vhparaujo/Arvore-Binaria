#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "arvore_binaria.h"

TreeNode* ab_node(int value){
    TreeNode* node = malloc(sizeof(TreeNode));
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void ab_insert_node(TreeNode** root, int value){
    if(*root == NULL) {
        *root = ab_node(value);
    } else {
        if((*root)->value >= value) {
            ab_insert_node(&(*root)->left, value);
        } else if((*root)->value < value) {
            ab_insert_node(&(*root)->right, value);
        } 
    }
}

void ab_print_inOrder(TreeNode* root){
    if(root != NULL) {
        ab_print_inOrder(root->left);
        printf("%d ", root->value);
        ab_print_inOrder(root->right);
    }
}

void ab_print_deOrder(TreeNode* root){
    if(root != NULL) {
        ab_print_inOrder(root->right);
        printf("%d ", root->value);
        ab_print_inOrder(root->left);
    }
}