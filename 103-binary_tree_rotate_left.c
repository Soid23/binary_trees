#include "binary_trees.h"
/**
 * binary_tree_rotate_left - left-rotation on a binary tree.
 * @tree: pointer.
 * Return: pointer of new node.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *b;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}
	b = tree->right;
	tree->right = b->left;
	if (b->left != NULL)
	{
		b->left->parent = tree;
	}
	b->left = tree;
	b->parent = tree->parent;
	tree->parent = b;
	return (b);
}
