#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as the left-child
 *
 * @parent: ptr to the node to insert the left-child in
 * @value: value to be stored in the new node
 * Return: ptr to the created new node. NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptrleft = NULL, *new_node = NULL;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	ptrleft = parent->left;
	parent->left = new_node;

	if (ptrleft)
	{
		ptrleft->parent = new_node;
		new_node->left = ptrleft;
	}

	return (new_node);
}