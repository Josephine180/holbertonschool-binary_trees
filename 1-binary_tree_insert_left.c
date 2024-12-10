#include "binary_trees.h"

/**
* binary_tree_insert_left : function that inserts
* a node as the left_child of another node
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
* Return: pointer to the created node, Null on failure
* or if parent is null
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

