#include "binary_trees.h"
int max(int num1, int num2)
{
	return ((num1 > num2) ? num1: num2);
}

int height(binary_tree_t *node)
{
	if (!node)
		return (0);
	return (1 + max(height(node->left), height(node->right)));
}

int node_height(binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (height(node) - 1);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	printf("b for: %d left %d right %d\n", tree->n, node_height(tree->left), node_height(tree->right));
	return (node_height(tree->left) - node_height(tree->right));
	
}
