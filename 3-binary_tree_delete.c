#include "binary_trees.h"

/**
 * binary_tree_delete - inserts a node as the right-child of another node
 * @tree: pointer to the parent node of the node to delete
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);

	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	free(tree);
}
