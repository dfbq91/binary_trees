#include "binary_trees.h"

/**
*binary_tree_depth - returns the node depth
*@tree: the node to check
*Return: max depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *node = tree;
	size_t levels = 0;

	if (!tree)
		return (0);
	while (node->parent)
	{
		node = node->parent;
		levels++;
	}
	return (levels);
}
