#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through binary tree using in-order traversal
 * @tree: node
 * @func: function pointer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

