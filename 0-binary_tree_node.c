#include "binary_trees.h"

/**
* binary_tree_node - function that creats a binary tree
* @parent: pointeur to the parent node
* @value: integer value to the store node
* Return: Pointer to the created node
*/


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
return (new_node);
}
