#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a given binary tree
 *
 * @tree: ptr to the root node of the tree to measure the height.
 * Return: 0 If tree is NULL, or the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);

	if (tree->left)
		hl = 1 + binary_tree_height(tree->left);
	if (tree->right)
		hr = 1 + binary_tree_height(tree->right);

	if (hl > hr)
		return (hl);
	return (hr);
}
