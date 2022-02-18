#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: the tree to count
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lnode = 0;
	size_t rnode = 0;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);
	if (tree->right && tree->left)
	{
		lnode = binary_tree_nodes(tree->left);
		rnode = binary_tree_nodes(tree->right);
		return (lnode + rnode + 1);
	}
	if (tree->left)
	{
		lnode = binary_tree_nodes(tree->left);
		return (lnode + 1);
	}
	else
	{
		rnode = binary_tree_nodes(tree->right);
		return (rnode + 1);
	}
}

