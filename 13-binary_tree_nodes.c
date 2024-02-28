#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child.
 * @tree: pointer
 * Return: if tree null (0)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_node_1, n_node_2;

	if (tree == NULL)
		return (0);

	n_node_1 = binary_tree_nodes(tree->left);
	n_node_2 = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (n_node_1 + n_node_2 + 1);

	return (0);
}
