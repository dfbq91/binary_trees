#include "binary_trees.h"

/**
*binary_tree_sibling - get the node sibling
*@node: the node to check
*Return: return the matching sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);
    if (node->parent->left)
    {
        if (node->parent->left->n == node->n)
        {
            if (node->parent->right)
                return (node->parent->right);
            else
                return (NULL);
        }
        return (node->parent->left);
    }
    else
    {
        return (NULL);
    }
    return (NULL);
}