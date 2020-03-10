#include "binary_trees.h"

/**
 * binary_tree_size - function that goes through a
 * binary tree using to get its size
 * @tree: pointer to the root node of the tree to traverse
 * Return: number of nodes
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		count += binary_tree_size(tree->left);
	if (tree->right != NULL)
		count += binary_tree_size(tree->right);

	return (count);
}
