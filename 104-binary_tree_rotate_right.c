#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: tree to be rotated
 *
 * Return: pointer to the new root node of the tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree)
		return (NULL);

	temp = tree->left;
	temp->parent = NULL;
	tree->left = temp->right;

	if (tree->left != NULL)
		tree->left->parent = tree;

	tree->parent = temp;
	temp->right = tree;

	return (temp);
}

