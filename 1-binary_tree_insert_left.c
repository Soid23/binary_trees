#include"binary_trees.h"
/**
 * binary_tree_insert_left - inserts nodes as left-child node.
 * @parent: pointer to the node.
 * @value: value in new node.
 * Return : NULL -or pointer. 
*/  
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new = malloc(sizeof(binary_tree_t));
    if (!new)
		return (new);

	if (!parent)
	{
		free(new);
		return (NULL);
	}
	new->left = parent->left;
	new->parent = parent;
	new->right = NULL;
	new->n = value;
	parent->left = new;

	return (new);

}
