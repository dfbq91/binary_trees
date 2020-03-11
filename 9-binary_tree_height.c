#include "binary_trees.h"

int max(int num1, int num2);
size_t height(const binary_tree_t *tree);

/**
*binary_tree_height - gets the height
*@tree: the tree
* Return: height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height(tree) - 1);
}

/**
*height - gets the height
*@tree: the tree
* Return: height of tree
*/

size_t height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + max(height(tree->left), height(tree->right)));

}

/**
*max - gets the height
*@num1: the tree
*@num2: the tree
* Return: height of tree
*/

int max(int num1, int num2)
{
	return ((num1 > num2) ? num1 : num2);
}
