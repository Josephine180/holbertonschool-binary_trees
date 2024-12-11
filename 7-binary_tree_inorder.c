#include "binary_trees.h"

/**
* binary_tree_inorder - function that goes through
* a binary tree using in order transversal
* @tree: pointeur to the root node
* @func: pointeur to the function to call each node
* Return: tree or func null we do nothing
*/



void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_inorder(tree->left, func);
/* traverser l'arbre jusqu'au noeud gauche */
/* appel recursif de la fonction func */
func(tree->n);
/* appliquer la function à la valeur du current node */
binary_tree_inorder(tree->right, func);
/* appel recursif de la fonction func */
return;
}

