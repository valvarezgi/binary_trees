#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root of the tree to measure
 * Return: number of leaves or 0 if tree is NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	else
		return (binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));

}
