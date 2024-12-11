#include "binary_trees.h"
/**
* binary_tree_is_full - function that checks if a binary tree is full
* @tree: pointer to the node
* Result: 1 or 0 if tree is NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
/* si arbre vide il est pas plein */
if (tree->left == NULL && tree->right == NULL)
return (1);
/* on verifie si le noeud a pas d'enfants*/
/* s'il n'a pas d'enfants il est plein à son niveau */
if(tree->left != NULL || tree->right != NULL)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
/* si le noeud a deux enfants on verifie recursivement*/
return (0);
}
