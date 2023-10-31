#include "binary_trees.h"

/**
 * binary_tree_delete - deletes entire binary tree
 *
 * @tree: ptr to the root node of the tree to delete
 * If tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
