#include "binary_trees.h"

/**
* binary_tree_insert_right - function that inserts
* a node as the left_child of another node
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
* Return: pointer to the created node, Null on failure
* or if parent is null
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);
if (parent == NULL)
return (NULL);
new_node->n = value;
new_node->parent = parent;
new_node->right = parent->right;
new_node->left = NULL;
if (parent->right != NULL)
parent->right->parent = new_node;
/* Set the new node as the left child of the parent */
parent->right = new_node;
return (new_node);
}
