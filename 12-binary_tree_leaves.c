#include "binary_trees.h"

/**
 * binary_tree_leaves - counts number of the leaf in a binary tree
 *
 * @tree: If tree is NULL, the function return 0
 * Return: A NULL ptr is not a leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);

	i = i + binary_tree_leaves(tree->left);
	i = i + binary_tree_leaves(tree->right);

	return (i);
}

