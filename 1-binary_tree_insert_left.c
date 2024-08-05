#include "binary_trees.h"

/**
 *binary_tree_insert_left - Adds a node as a left child of a parent.
 *@parent: Pointer to the parent of the new node.
 *@value: value to write in the new node.
 *
 *Return: Pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;

	/* Handling parent already having a left child case */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	/* Default case */
	parent->left = new_node;
	new_node->parent = parent;

		return (new_node);
}
