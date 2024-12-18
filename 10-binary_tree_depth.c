#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the node, or 0 if the tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	/*Remonter tree jusqu'a la racine en mesurant les niveaux*/
	while (tree->parent != NULL)
	{
		depth++;/*Monte d'un niveau*/
		tree = tree->parent;/*Remonte vers parent*/
	}
	return (depth);
}
