#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - a function to create a new node
 * @parent: the parent of the new node
 * @value: the value of the new node
 * Return: return the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	/* Allocate memory and check if fail */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
