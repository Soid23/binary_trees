#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root.
 * @node: pointer to check node.
 * Return: if node null (0) else 1.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
