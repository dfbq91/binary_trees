#include "binary_trees.h"

/**
*binary_tree_uncle - get the uncle node
*@node: the node to check
*Return: return the matching uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int val1, val2;

	if (!node || !node->parent->parent)
		return (NULL);
	if (node->parent->parent)
	{
		if (node->parent->parent->left)
		{
			val1 = node->parent->n;
			val2 = node->parent->parent->left->n;
			if (val1 == val2)
			{
				return (node->parent->parent->right);
			}
			return (node->parent->parent->left);
		}
	}
	return (NULL);
}
