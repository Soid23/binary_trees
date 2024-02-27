#include "binary_trees.h"
/**
 * binary_tree_insert_right - adds nodes on right.
 * @parent: pointer to node on right.
 * @value: value to be inputed on node.
 * Return: NULL - or pointer.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!new)
		return (NULL);
	if (!parent)
		return (NULL);
	{
		free(new);
		return (NULL);
	}
	new->right = parent->right;
	new->parent = parent;
	new->left = NULL;
	new->n = value;
	parent->right = new;
	return (new);
}
