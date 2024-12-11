#include "binary_trees.h"

/**
* tree_height - helper function to calculate height ot a tree
* @tree: pointer to the root node of the tree to measure the height
* Return: the height of the tree or 0 if NULL
*/

static size_t tree_height(const binary_tree_t *tree)
{
size_t t_left, t_right;

if (tree == NULL)
	return (0);

/*calcul de la taille des 'branches'*/
t_left = tree_height(tree->left);
t_right = tree_height(tree->right);

/*si left > right return left +1 sinon return right +1*/
return ((t_left > t_right ? t_left : t_right) +1);
}

/**
* binary_tree_balance - measures the balance factor of a tree
* @tree: pointer to the root of the tree to measure the balance factor
* Return: balance factor or 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);

/*left - right to see the balance factor*/
return (tree_height(tree->left) - tree_height(tree->right));
}
