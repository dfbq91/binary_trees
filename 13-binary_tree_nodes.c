#include "binary_trees.h"
/**
*nodes - count the non empty nodes
*@node: the node to check
*@count: the counter
*Return: something
*/
void nodes(binary_tree_t *node, size_t *count)
{
	if (node->left || node->right)
	{
		*count += 1;
		if (node->left)
			nodes(node->left, count);
		if (node->right)
			nodes(node->right, count);
	}
}


/**
*binary_tree_nodes - counts the non empty nodes
*@tree: the tree to check
*Return: non empty nodes count
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		count += 1;
	}

	if (tree->left != NULL)
	{
		nodes(tree->left, &count);
	}
	if (tree->right != NULL)
	{
		nodes(tree->right, &count);
	}
	return (count);
}
