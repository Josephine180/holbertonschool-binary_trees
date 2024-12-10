#include "binary_trees.h"
/**
* binary_tree_size - function that measures the size of a binary tree
* @tree: pointeur on the root node of the tree to mesure the size
* Return: size or 0 if it failed
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
/* on verifie que tree n'est pas null */
/* si le noeud n'a pas d'enfant on retourne 0 */
binary_tree_size(tree->left);
/* on calcule la taille des branches*/
binary_tree_size(tree->right);
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
