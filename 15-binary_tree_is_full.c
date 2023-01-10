#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if full binary tree
 * @tree: tree to check
 * Return true, false, or 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return true;

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return false;
}
