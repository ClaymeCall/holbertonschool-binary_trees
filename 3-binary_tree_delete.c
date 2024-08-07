#include "binary_trees.h"

/**
 *binary_tree_delete - Deletes an entire binary tree.
 *@tree: pointer to the root node of the tree to delete.
 *
 *Return: void.
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;
	if (tree->left && tree->right == NULL)
	{
		free(tree);
		return;
	}

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	free(tree);
}
