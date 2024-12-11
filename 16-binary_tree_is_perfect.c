#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height_left, height_right;
if (tree == NULL)
return (0);
height_left = binary_tree_height(tree->left);
height_right = binary_tree_height(tree->right);
/* si sous-arbres ne sont pas égaux */
if (height_left != height_right)
return (0);
/*si noeud gauche et droit sont des feuilles c'est parfait */
if (tree->left == NULL && tree->right == NULL)
return (1);
return (binary_tree_is_perfect(tree->left)
&& binary_tree_is_perfect(tree->right));
}
