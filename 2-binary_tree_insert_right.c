#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	/** Créez un nouveau nœud avec la valeur donnée */
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	/** Insérez le nouveau nœud comme enfant droit du parent */
	node->right = parent->right;
	parent->right = node;

	/** Si le parent avait déjà un enfant droit, mettre à jour son parent */
	if (node->right != NULL)
		node->right->parent = node;

	return (node);
}

