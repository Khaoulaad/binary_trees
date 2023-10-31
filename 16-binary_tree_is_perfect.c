#include "binary_trees.h"

/**
 * compare_depth - compares the size
 *
 * @tree: ptr to the root
 * Return: size
 */
int comp_depths(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (comp_depths(tree->left) + 1 + comp_depths(tree->right));
}

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 *
 * @tree: ptr to the root node of the tree to check
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_l = 0, h_r = 0;

	if (tree == NULL)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	h_l = comp_depths(tree->left);
	h_r = comp_depths(tree->right);

	if ((h_l - h_r) == 0)
		return (1);

	return (0);
}

