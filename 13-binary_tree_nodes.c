#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: pointer to the root of the tree to measure
 * Return: number of nodes or 0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t counter = 1;

    if (tree == NULL)
        return (0);

    if (tree->right && tree->left)
    {
        counter += binary_tree_nodes(tree->right) +
        binary_tree_nodes(tree->left);
        return (counter);
    }
    else if (tree->right)
    {
        counter += binary_tree_nodes(tree->right);
        return (counter);
    }
    else if (tree->left)
    {
        counter += binary_tree_nodes(tree->left);
        return (counter);
    }
    else
    {
        return (0);
    }
}
