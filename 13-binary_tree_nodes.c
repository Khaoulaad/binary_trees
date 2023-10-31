#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of  nodes with at least 1 child in a binary tree
 *
 * @tree: ptr to the root node  to count the number of nodes
 * Return: If tree is NULL, the function must return 0
 * A NULL pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		i = 1;

	i += binary_tree_nodes(tree->left);
	i += binary_tree_nodes(tree->right);

	return (i);
}

