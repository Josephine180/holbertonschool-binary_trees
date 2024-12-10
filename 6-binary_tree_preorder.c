#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: This function performs a pre-order traversal of the binary tree
 * If tree or func is NULL, the function does nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		/*Si tree ou func est NULL, on ne fait rien*/
		return;

	func(tree->n);/*Appeler la fonction sur la valeur de node actuel*/
	binary_tree_preorder(tree->left, func); /*Traverser tree left*/
	binary_tree_preorder(tree->right, func);/*Traverser tree right*/
}
