#include "binary_trees.h"
/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal.
 * @tree:pointer pointer to root node.
 * @func:pointer to function.
 * Return: if tree or func null (nothing).
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree 
