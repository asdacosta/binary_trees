#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left child of another
 * @parent: Pointer to parent
 * @value: value of node
 *
 * Return: Pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (parent->left)
	{
		new->left = parent->left;
		new->left->parent = new;
	}

	parent->left = new;
	return (new);
}

