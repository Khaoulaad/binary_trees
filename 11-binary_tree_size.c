#include "binary_trees.h"

/**
 * binary_tree_size - gives the size of a binary tree
 *
 * @tree: ptr to the root node of the tree to measure the size
 * Return: size or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 1;

	if (tree == NULL)
		return (0);

	i += binary_tree_size(tree->left);
	i += binary_tree_size(tree->right);

	return (i);
}
