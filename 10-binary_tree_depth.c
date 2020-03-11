#include "binary_trees.h"

size_t max_depth(const binary_tree_t *tree);
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

size_t max_depth(const binary_tree_t *tree)
{
    size_t ldepth, rdepth;

    if (!tree)
        return (0);
    ldepth = max_depth(tree->left);
    rdepth = max_depth(tree->right);
    if (ldepth > rdepth)
        return (ldepth + 1);
    else
        return (rdepth + 1);
}