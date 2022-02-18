#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: checks if root
 * Return: 1 or 0 for yes or no
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);
	else
		return (0);
	return (0);
}

