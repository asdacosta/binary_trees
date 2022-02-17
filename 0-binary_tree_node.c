#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent
 * @value: value of node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = calloc(1, sizeof(binary_tree_t));

	
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	return (new);
}
