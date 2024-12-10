#include "binary_trees.h"

/**
* binary_tree_is_root - functions that checks
* if a given node is a root
* @node: pointeur to the node to check
* Return: 1 if nod is a root, or 0
* if node is null return null
*/

int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->left != NULL && node->right != NULL)
return (1);
return (0);
}
