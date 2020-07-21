#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 * @parent: pointer to the node to insert child
 * @value: value of the new node
 * Return: pointer to created node or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;

	if (!parent)
		return (NULL);

	leftNode = binary_tree_node(parent, value);
	if (parent->left)
	{
		parent->left->parent = leftNode;
		leftNode->left = parent->left;
	}
	parent->left = leftNode;
	return (leftNode);
}
