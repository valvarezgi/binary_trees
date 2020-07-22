#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of
 * a binary tree
 * @tree: pointer to the root of the tree to measure
 * Return: size of the tree or 0 if tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->right) +
		1 + binary_tree_size(tree->left));
}
