#include "binary_trees.h"
/**
*binary_tree_is_full - check if a binary tree is full
*@tree: pointer to the binary tree
*Return: 1 if the btree is full, otherwise return 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 1;

	if (tree == NULL)
		return (1);

	is_full = binary_tree_is_full(tree->left);
	if ((tree->left == NULL && tree->right != NULL) ||
	    (tree->left != NULL && tree->right == NULL))
		return (0);
	is_full = binary_tree_is_full(tree->right);
	if ((tree->left == NULL && tree->right != NULL) ||
	    (tree->left != NULL && tree->right == NULL))
		return (0);

	return (is_full);
}
