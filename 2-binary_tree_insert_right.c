#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - a function to insert a node child to left
 *@parent: the position of parents for insertion
 *@value: the integer for the node
 *Return: return the position of the new_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	/*Check if parent is NULL*/
	if (parent == NULL)
		return (NULL);

	/*Allocate memory and check if fail*/
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/*Parameter node*/
	new_node->n = value;
	if (parent->right != NULL)
		parent->right->parent = new_node;
	new_node->right = parent->right;
	new_node->left = NULL;
	new_node->parent = parent;
	parent->right = new_node;

	/*Return the node*/
	return (new_node);
}
