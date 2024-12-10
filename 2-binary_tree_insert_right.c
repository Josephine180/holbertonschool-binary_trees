#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)/*Verifier si parent est NULL*/
		return (NULL);
	/*Allouer memoire pour new_node*/
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)/*Si allocation echoue, return NULL*/
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;
	/*new_node prend ancien enfant droit du parent*/

	if (parent->right)/*Si parent avait enfant droit*/
		parent->right->parent = new_node;
		/*Reaffecte parent de ancien enfant droit*/
	parent->right = new_node;
	return (new_node);
}
