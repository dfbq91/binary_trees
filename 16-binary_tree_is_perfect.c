#include "binary_trees.h"

/**
 * depth - function if a binary tree is perfect
 * @node: pointer to the root node of the tree to traverse
 * Return: If the binary tree is perfect, return 1, otherwise 0
 */

int depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}
/**
 * ip - function if a binary tree is perfect
 * @tree: pointer to the root node of the tree to traverse
 *@d: depth
 *@level: the level
 * Return: If the binary tree is perfect, return 1, otherwise 0
 */
int ip(const binary_tree_t *tree, int d, int level)
{
	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
		return (d == level + 1);
	if (!tree->left || !tree->right)
		return (0);
	return (ip(tree->left, d, level + 1) && ip(tree->right, d, level + 1));
}
/**
 * binary_tree_is_perfect - function if a binary tree is perfect
 * @tree: pointer to the root node of the tree to traverse
 * Return: If the binary tree is perfect, return 1, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect, deep;

	if (tree == NULL)
		return (0);
	deep = depth(tree);
	perfect = ip(tree, deep, 0);
	return (perfect);
}
