#include "binary_trees.h"

/**
 * binary_tree_node - Add a new node to a binary tree.
 * @parent: Pointer to the parent.
 * @value: Value to be written in new node.
 *
 * Return: pointer to the new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
