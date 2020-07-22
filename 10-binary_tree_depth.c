#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth 
 * of a node in a binary tree
 * @tree: pointer to the root of the tree to measure
 * Return: depth of the tree or 0 if tree is NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t counter = 0;
    const binary_tree_t *aux;

    if (tree == NULL)
        return (0);
    
    for (aux = tree; aux && aux->parent; aux = aux->parent)
        counter++;
    
    return (counter);
}