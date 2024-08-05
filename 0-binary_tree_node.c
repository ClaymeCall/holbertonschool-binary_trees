#include "binary_trees.h"

/**
 * binary_tree_node : add a new node to a binary tree
 * @parent: pointer to the parent
 * @value: value to be written in new node
 * 
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if(new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if(parent == NULL)
		return (new_node);

	new_node->parent = parent;

	return (new_node);
}
