#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node.
 * Return: tree if NULL (0)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_a, size_b;

	if (tree == NULL)
		return (0);

	size_a = binary_tree_size(tree->left);
	size_b = binary_tree_size(tree->right);
	return (size_a + size_b + 1);
}
