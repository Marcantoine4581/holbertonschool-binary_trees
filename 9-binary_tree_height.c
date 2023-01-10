#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of the binary tree
 * @tree: tree to measure the height of
 * Return: height of the tree, or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left < right)
		height = right + 1;
	else
		height = left + 1;

	return (height);
}
