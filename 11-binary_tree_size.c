#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree measured
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeleft = 0;
	size_t sizeright = 0;

	if (tree == NULL)
		return (0);

	sizeleft = binary_tree_size(tree->left);
	sizeright = binary_tree_size(tree->right);

	return (sizeleft + sizeright + 1);
}

