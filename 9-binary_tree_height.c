#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: pointeur  to the root node of the tree
* Return: size of the tree or 0 if it's null
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
int left_height;
int right_height;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
if (left_height >= right_height)
return (left_height + 1);
else
return (right_height + 1);
}
