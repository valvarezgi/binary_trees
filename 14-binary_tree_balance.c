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


/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree
 * @tree: pointer to the root of the tree to measure
 * Return: mesure 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int balanceRight = 0, balanceLeft = 0;

	if (!tree)
		return (0);

	if (tree->right)
		balanceRight = binary_tree_height(tree->right) + 1;

	if (tree->left)
		balanceLeft = binary_tree_height(tree->left) + 1;

	return (balanceLeft - balanceRight);
}
