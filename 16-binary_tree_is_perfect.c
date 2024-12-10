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
