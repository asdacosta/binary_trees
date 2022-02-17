#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to parent
 * @value: value of node
 *
 * Return: Pointer to created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (parent->right)
	{
		new->right = parent->right;
		new->right->parent = new;
	}

	parent->right = new;
	return (new);
}

