#include "binary_trees.h"
<<<<<<< HEAD

/**
* binary_tree_node - function that creats a binary tree
* @parent: pointeur to the parent node
* @value: integer value to the store node
* Return: Pointer to the created node
*/


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
new_node = malloc(sizeof(binary_tree_t));
if ( new_node == NULL)
return (NULL);
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
return(new_node);
=======
/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the new node
 * 
 * Return: Pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Allouer memoire pour new_node*/
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/*Verifier si allocation memoire a fonctionnee*/
	if (new_node == NULL)
		return (NULL);
	/*Initialiser new_node*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return(new_node);
>>>>>>> fichierdetravail_damien
}
