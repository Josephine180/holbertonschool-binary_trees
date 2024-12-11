#include "binary_trees.h"

/**
* binary_tree_insert_left - function that inserts
* a node as the left_child of another node
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
* Return: pointer to the created node, Null on failure
* or if parent is null
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
if (parent == NULL)
return (NULL);
/* si parent est null on retourne null */
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);
/* on verifie l'alloction de mémoire */
new_node->n = value;
/* on assigne une valeur au nouveau noeud */
new_node->parent = parent;
/* on pointe le nouveau noeud vers son parent qui est parent */
/* arbre binaire = hierarchie on doit savoir le parent */
new_node->left = NULL;
/* si enfant, on le relie au nouveau noeud gauche */
/* l'enfant devient l'enfant du nouveau noeud */
new_node->right = NULL;
/* initialisation du nouveau champs right à null */
if (parent->left != NULL)
{
new_node->left = parent->left;
/* Set the new node as the left child of the parent */
parent->left->parent = new_node;
}
parent->left = new_node;
return (new_node);
}
