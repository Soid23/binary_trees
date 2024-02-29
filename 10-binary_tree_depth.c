#include "binary_trees.h"
/**
 * binary_tree_depth -  measures the depth of a node in a binary tree.
 * @tree: pointer to node.
 * Return: if tree NULL-0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
	}
}
