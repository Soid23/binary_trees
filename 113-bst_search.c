#include "binary_trees.h"
/**
 * bst_search - searches for a value in a Binary Search Tree.
 * @tree: pointer to node.
 * @value: search value.
 * Return: if tree NULL(NULL).
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
