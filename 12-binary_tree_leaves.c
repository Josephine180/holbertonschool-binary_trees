#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: The number of leaves or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/*Si node est une leaf*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*Sinon, compte recursivement leaves des sous arbres gauche et droit*/
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
