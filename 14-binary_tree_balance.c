#include "binary_trees.h"

/**
 * binary_tree_height_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: height
 * If tree is NULL, return 0
 */

size_t binary_tree_heigh_balance(const binary_tree_t *tree)
{
	size_t h_l = 0, h_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		h_l = 1 + binary_tree_heigh_balance(tree->left);
	if (tree->right)
		h_r = 1 + binary_tree_heigh_balance(tree->right);

	if (h_l > h_r)
		return (h_l);
	return (h_r);
}

/**
 * binary_tree_balance - measures the balance of a binary tree
 *
 * @tree: ptr to the root node of the tree
 * Return: balance factor
 * If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h_l = 0, h_r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		h_l = 1 + binary_tree_heigh_balance(tree->left);
	if (tree->right)
		h_r = 1 + binary_tree_heigh_balance(tree->right);
	return (h_l - h_r);
}

