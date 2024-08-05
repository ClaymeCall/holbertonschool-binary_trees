#include "binary_trees.h"

/*
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
		return(left_height);

	return(right_height);
}
