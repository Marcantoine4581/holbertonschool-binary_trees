#include "binary_trees.h"

/**
 * binary_tree_delete - delete binary tree
 * @tree: pointer to root node
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	free(tree);
}