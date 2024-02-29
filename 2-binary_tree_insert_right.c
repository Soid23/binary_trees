#include "binary_trees.h"
/**
 * binary_tree_insert_right - adds nodes on right.
 * @parent: pointer to node on right.
 * @value: value to be inputed on node.
 * Return: NULL - or pointer.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
