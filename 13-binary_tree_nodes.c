#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least one child
 * @tree: pointer to root of tree
 * Return: number of nodes, or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (1);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
