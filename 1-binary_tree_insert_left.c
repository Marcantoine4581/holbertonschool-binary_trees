#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another
 * @parent: pointer to the node to insert the left-child
 * @value: value to store in the new node
 * Return: pointer to the new node, or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = parent->left;
	new->right = NULL;
	parent->left = new;
	if (new->left)
		new->left->parent = new;

	return (new);
}
