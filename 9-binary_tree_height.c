#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the
 * height of a binary tree
 * @tree: pointer to the root of the tree to measure
 * Return: height of the tree or 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightRight, heightLeft;

	if (!tree)
		return (0);

	heightRight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	heightLeft = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	return (heightLeft > heightRight ? heightLeft : heightRight);
}
