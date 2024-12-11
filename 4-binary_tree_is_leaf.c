#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 *         If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	/*Verifier si node n'a ni enfant gauche, ni enfant droit*/
	if (node->left == NULL && node->right == NULL)
		return (1);
	/*Si node a au moins un enfant, ce n'est pas une leaf*/
	return (0);
}
