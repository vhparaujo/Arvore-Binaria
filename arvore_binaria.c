#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "arvore_binaria.h"
#include <stdbool.h>

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

void ab_print_preOrder(TreeNode* root){

    printf("%d ", root->value);

    if(root -> left != NULL){
        ab_print_preOrder(root->left);
    }

    if(root -> right != NULL){
        ab_print_preOrder(root->right);
    }

}

void ab_print_inOrder(TreeNode* root){
    
    if(root -> left != NULL){
        ab_print_inOrder(root->left);
    }

    printf("%d ", root->value);

    if(root -> right != NULL){
        ab_print_inOrder(root->right);
    }
}

void ab_print_posOrder(TreeNode* root){

    if(root -> left != NULL){
        ab_print_posOrder(root->left);
    }

    if(root -> right != NULL){
        ab_print_posOrder(root->right);
    }

    printf("%d ", root->value);

}

TreeNode* ab_search(TreeNode* root, int value) {
    if (root == NULL || root->value == value) {
        return root;
    }
    
    if (root->value < value) {
        return ab_search(root->right, value);
    }
    
    return ab_search(root->left, value);
}

bool ab_search_value(TreeNode* root, int value) {
    TreeNode* foundNode = ab_search(root, value);
    return (foundNode != NULL);
}
