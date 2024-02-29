#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree.
 * @tree: pointer
 * Return: to new node.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *a;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}
	a = tree->left;
	tree->left = a->right;
	if (a->right != NULL)
	{
		a->right->parent = tree;
	}
	a->right = tree;
	a->parent = tree->parent;
	tree->parent = a;
	return (a);
}
