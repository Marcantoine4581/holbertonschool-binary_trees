#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of the binary tree
 * @tree: tree to measure the height of
 * Return: height of the tree, or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_side, right_side;

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (left_side > right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}
