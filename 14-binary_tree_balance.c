#include "binary_trees.h"

/**
 *binary_tree_height - Measures the height of a binary tree.
 *@tree: Pointer to the root node of the tree.
 *
 *Return: The height as size_t.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	left_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	if (left_height > right_height)
		return (left_height);

	return (right_height);
}

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree:  pointer to the root node
 *
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	right_height = (tree->right) ? (int)binary_tree_height(tree->right) : -1;

	return (left_height - right_height);
}
