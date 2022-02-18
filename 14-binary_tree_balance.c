#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor
 *	of a binary tree
 * @tree: is a pointer to the root node of the tree
 *	to measure the balance factor
 *
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);

	h_left = tree->left ? (int)binary_tree_height(tree->left) : -1;
	h_right = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (h_left - h_right);
}

/**
 * binary_tree_height - a function to measure the height of a binary tree
 * @tree: the tree's height to measure
 *
 * Return: the height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (tree == NULL)
		return (0);


	h_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	h_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (h_left > h_right ? h_left : h_right);
}

