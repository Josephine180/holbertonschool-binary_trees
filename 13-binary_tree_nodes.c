#include "binary_trees.h"

/**
* binary_tree_nodes - function that counts the nodes with
* at least 1 child in a binary tree
* @tree: pointeur on the root node
* Return: number of node or 0 if tree null
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;
if (tree == NULL)
return (0);
/* on verifie que tree est pas null et qu'on doit le parcourir*/
if (tree->left != NULL || tree->right != NULL)
/* on verifie que les noeuds ont des enfants donc pas egal à null */
count = 1;
/* vrai donc on assigne 1 */
count += binary_tree_nodes(tree->left);
/* appel récursif et on ajoute chaque noeud += */
/* ca s'arrête quand on arrive à null */
count += binary_tree_nodes(tree->right);
return (count);
/* on retourne le nombre de noeuds */
}
