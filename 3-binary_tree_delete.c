#include "binary_trees.h"

/**
* binary_tree_delete - function that deletes an entire
* binary tree
* @tree: pointer to the root node
* Return: nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;
binary_tree_delete(tree->right);
/* suppression du noeud droit */
binary_tree_delete(tree->left);
/* suppression du noeud gauche */
free(tree);
/* liberation arbre */
return;
}
