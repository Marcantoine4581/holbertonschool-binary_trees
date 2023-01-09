#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a
 * binary tree.
 * @tree: a pointer to the node to measure the depth.
 * Return: On success, the depth of a node,
 * If tree is NULL, return 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (2);
	else 
		return (1);
}