#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the lowest common
 *	ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: If no common ancestor was found, funcion returns NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t depthONE, depthTWO;

	if (first == NULL || second == NULL)
		return (NULL);

	depthONE = binary_tree_depth((binary_tree_t *)first);
	depthTWO = binary_tree_depth((binary_tree_t *)second);

	while (depthONE > depthTWO)
	{
		first = first->parent;
		depthONE--;
	}
	while (depthTWO > depthONE)
	{
		second = second->parent;
		depthTWO--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}

/**
 * binary_tree_depth - a function that measures the depth of a node
 *	in a binary tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		node_depth++;
		tree = tree->parent;
	}

	return (node_depth);
}

