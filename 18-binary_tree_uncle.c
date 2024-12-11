#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	/*Si parent n'a pas de parent (donc racine) on return NULL*/
	if (parent->parent == NULL)
		return (NULL);

	grandparent = parent->parent;
	/*Verifier si parent de node est fils gauche ou droit de grandparent*/
	if (grandparent->left == parent)
		return (grandparent->right);/*Oncle est frere droit du parent*/
	else if (grandparent->right == parent)
		return (grandparent->left);/*Oncle est frere gauche du parent*/

	return (NULL);/*Aucun oncle (si grandparent a un seul enfant)*/
}
