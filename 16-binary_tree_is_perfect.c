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

/**
 * binary_tree_is_perfect - function that checks if a 
 * binary tree is perfect
 * @tree: pointer to the root of the tree to check
 * Return: 0 if tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    if (!binary_tree_balance(tree))
    {
        if (!binary_tree_height(tree->right) && !binary_tree_height(tree->left))
            return (1);
        
        else
            return (binary_tree_is_perfect(tree->right) && binary_tree_is_perfect(tree->left));
        
    }
    else
        return (0);
    
}