#include<stdio.h>
#include <stdlib.h>
struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};
void preOrderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void inOrderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    } 
   inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}
struct TreeNode* newNode(int data) {
    struct TreeNode* node = malloc(sizeof(struct TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
int main() {
    struct TreeNode* root = newNode(45);
    root->left = newNode(19);
    root->right = newNode(56);
    root->left->left = newNode(12);
    root->left->right = newNode(34);
    root->left->left->left = newNode(10);
    root->left->left->right = newNode(32);
    root->right->left  = newNode(54);
    root->right->right = newNode(78);
    root->right->right->left = newNode(67);
    root->right->right->right = newNode(89);
    root->right->right->right->left = newNode(81);
    printf("Pre_order traversal of the binary tree: \n");
    printf("In_order traversal of the binary tree: \n");
    preOrderTraversal(root);
    printf("\n");
    inOrderTraversal(root);
   

//����return�0;
}
