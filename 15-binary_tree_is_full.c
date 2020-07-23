#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root of the tree to measure
 * Return: 0 if tree is NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (!tree->right && !tree->left)
		return (1);
	else if (tree->right && tree->left)
		return (binary_tree_is_full(tree->right) &&
			binary_tree_is_full(tree->left));
	else
		return (0);
}
