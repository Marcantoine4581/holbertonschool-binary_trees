#include "binary_trees.h"
int _pow_recursion(int x, int y);


/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: a pointer to the root node of the tree to check.
 * Return: 1 if perfect or 0.
 * If tree is NULL, return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	power = _pow_recursion(2, height);

	return (power - 1 == nodes);
}

/**
 * _pow_recursion - function that returns the value of x raised to
 * the power of y.
 * @x: number.
 * @y: power.
 * Return: the value of x raised to the power of y,
 * If y is lower than 0, the function should return -1.
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	res *= _pow_recursion(x, y - 1);

	return (res);
}

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

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure
 * Return: size or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);

	return (size);
}
