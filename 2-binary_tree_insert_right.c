#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 *
 * @parent: ptr to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: a ptr to the created node,
 *	or null if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nod = NULL;

	if (!parent)
		return (NULL);

	new_nod = malloc(sizeof(binary_tree_t));

	if (!new_nod)
		return (NULL);

	new_nod->n = value;
	new_nod->left = NULL;

	if (parent->right == NULL)
	{
		new_nod->parent = parent;
		new_nod->right = NULL;
		parent->right = new_nod;
	}
	else
	{
		new_nod->parent = parent;
		new_nod->right = parent->right;
		parent->right = new_nod;
		new_nod->right->parent = new_nod;
	}
	return (new_nod);
}
