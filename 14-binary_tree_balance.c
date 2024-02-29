#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of BT.
 * @tree: pointer.
 * Return: if tree NULL (0).
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? (int)binary_tree_height(tree->left) : -1;
	height_r = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (height_l - height_r);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lef = 0, righ = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		righ = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lef > righ) ? lef : righ);
	}
	return (0);
}
