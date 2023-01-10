#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node to find the sibling of
 * Return: sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sib;

	if (node == NULL || node->parent == NULL)
		return NULL;

	if (node == node->parent->left)
		sib = node->parent->right;
	else
		sib = node->parent->left;

	if (sib == NULL)
		return (NULL);

	return (sib);
}
