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
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/* Creating a new node and checking success*/
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* Handling parent already having a left child case */
	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}

	/* Inserting the new node in the tree */
	parent->left = new_node;

		return (new_node);
}
