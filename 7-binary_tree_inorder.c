#include "binary_trees.h"

/**
 *binary_tree_inorder - Traverses a binary using inorder method.
 *@tree: Pointer to the root of the tree to traverse.
 *@func: Pointer to function to call for each node.
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
