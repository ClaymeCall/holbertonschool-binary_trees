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

	if (tree == NULL)
		return (0);

	left_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	if (left_height > right_height)
		return (left_height);

	return (right_height);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  pointer to the root node of the tree
 *
 * Return: 1 is perfect, 0 if not or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *lsub = NULL, *rsub = NULL;

	if (tree == NULL)
		return (0);

	lsub= tree->left;
	rsub= tree->right;

	if (lsub == NULL && rsub == NULL)
		return (1);

	if (binary_tree_height(lsub) != binary_tree_height(rsub))
		return (0);

	return (binary_tree_is_perfect(lsub) && binary_tree_is_perfect(rsub));
}
