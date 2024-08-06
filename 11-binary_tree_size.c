#include "binary_trees.h"

/**
 *binary_tree_size - Calculate the size of a binary tree.
 *@tree: Pointer to the root node of the tree.
 *
 *Return: The size of binary tree, or 0 if tree == NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size, r_size;

	if (!tree)
		return (0);

	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);
	
	return (l_size + 1 + r_size);
}
