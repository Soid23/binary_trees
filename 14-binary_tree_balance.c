#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of BT.
 * @tree: pointer.
 * Return: if tree NULL (0).
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


