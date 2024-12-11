#include "binary_trees.h"
/**
 * tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree or 0 if tree is NULL
 */
static size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	/*Calculer recursivement la hauteur sous arbres gauche et droit*/
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	/*Retourner hauteur maximale + 1 (pour node actuel)*/
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of the tree or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (left_height(tree->left) - right_height(tree->right));
}
