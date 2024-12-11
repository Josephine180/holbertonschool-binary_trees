#include "binary_trees.h"
/**
* binary_tree_sibling - function that finds the sibling of a node
* @node: pointer to the node to find the sibling
* Return: pointer to the sibling node, null if node is null or the parent
* if node has no sibling, return Null
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL)
return (NULL);
/* on verifie que le node n'est pas null */
if (node->parent == NULL)
return (NULL);
/* si le node parent est null on retourne null */
if (node->parent->left == node)
return (node->parent->right);
/*si le noeud est l'enfant gauche on retourne le droit */
if (node->parent->right == node)
return (node->parent->left);
/* pareil mais avec le gauche */
return (NULL);
/* rien n'existe donc on retourne NULL */
}
