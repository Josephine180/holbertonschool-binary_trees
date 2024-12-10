#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: This function performs a post-order traversal of binary tree
 * If tree or func is NULL, the function does nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);/*Traverser tree left*/
	binary_tree_postorder(tree->right, func);/*Traverser tree right*/
	func(tree->n);/*Appeler fonction sur valeur du node actuel*/
}
