#include "binary_trees.h"
/**
*max - get the max number
*@num1: the first number
*@num2: the second number
*Return: max number
*/
int max(int num1, int num2)
{
	return ((num1 > num2) ? num1 : num2);
}
/**
*height - get the max number
*@node: the first number
*Return: max number
*/
int height(binary_tree_t *node)
{
	if (!node)
		return (0);
	return (1 + max(height(node->left), height(node->right)));
}
/**
*node_height - get the max number
*@node: the first number
*Return: max number
*/
int node_height(binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (height(node));
}
/**
*binary_tree_balance - get the max number
*@tree: the first number
*Return: max number
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	return (node_height(tree->left) - node_height(tree->right));
}
