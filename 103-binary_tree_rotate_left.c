#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left rotation on a binary tree
 * @tree: the tree to be rotated
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL || tree->right == NULL)
		return (NULL);
	tree->parent = tree->right;
	if (tree->right->left)
	{
		tree->right->parent = tree;
		tree->right = tree->parent->left;
	}
	else
		tree->right = NULL;

	tree->parent->parent = NULL;
	tree->parent->left = tree;
	return (tree->parent);
}

