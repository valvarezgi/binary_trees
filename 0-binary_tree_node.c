#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to parent node of the node to create
 * @value: value of the new node
 * Return: new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode)
	{
		newNode->n = value;
		newNode->parent = parent;
		newNode->right = NULL;
		newNode->left = NULL;
	}
	return (newNode);
}
