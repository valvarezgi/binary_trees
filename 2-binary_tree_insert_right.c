#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 * @parent: pointer to the node to insert child
 * @value: value of the new node
 * Return: pointer to created node or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	if (!parent)
		return (NULL);

	rightNode = binary_tree_node(parent, value);
	if (parent->right)
	{
		parent->right->parent = rightNode;
		rightNode->right = parent->right;
	}
	parent->right = rightNode;
	return (rightNode);
}
