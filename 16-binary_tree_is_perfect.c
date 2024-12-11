#include "binary_trees.h"
/**
 * binary_tree_height - Helper function to calculate the height of the tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree or 0 if tree is NULL
 */
static size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * is_perfect_recursive - Helper function to check if the tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * @depth: Current depth of the node
 * @level: The level of the leaf nodes
 *
 * Return: 1 if the tree is perfect otherwise 0
 */
static int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
		return (1);
	/*Si node est leaf*/
	if (!tree->left && !tree->right)
	{
		if (level == depth)/*Verifier si leaf est au bon niveau*/
			return (1);/*Tree est parfait a ce niveau*/
		else
			return (0);
	}
	/*Si node a un seul enfant, tree n'est pas parfait*/
	if (!tree->left || !tree->right)
		return (0);
	/*Appeler recursivement la fonction pour sous arbres gauche et droit*/
	return (is_perfect_recursive(tree->left, depth, level + 1) &&
		is_perfect_recursive(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	/*Si tree est vide, pas parfait*/
	if (!tree)
		return (0);
	/*Calculer profondeur de tree (hauteur last level)*/
	depth = binary_tree_height(tree) - 1;
	/*Verifier si tree est  parfait en utilisant fonction recursive*/
	return (is_perfect_recursive(tree, depth, 0));
}
