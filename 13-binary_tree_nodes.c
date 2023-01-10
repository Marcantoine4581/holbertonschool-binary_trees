#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least one child
 * @tree: pointer to root of tree
 * Return: number of nodes, or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		nodes += 1;

	return (nodes);
}
