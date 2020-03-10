#include "binary_trees.h"

int max(int num1, int num2);
size_t height(const binary_tree_t *tree);

size_t binary_tree_height(const binary_tree_t *tree)
{
    return (height(tree) - 1);
}

size_t height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    
    return (1 + max(height(tree->left), height(tree->right)));

}

int max(int num1, int num2)
{
	return ((num1 > num2) ? num1 : num2 );
}