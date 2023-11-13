typedef struct TreeNode{
    int value;
    struct TreeNode* left; 
    struct TreeNode* right; 
} TreeNode;

TreeNode* ab_node(int value);
void ab_insert_node(TreeNode** root, int value);
void ab_print_inOrder(TreeNode* root);
void ab_print_deOrder(TreeNode* root);