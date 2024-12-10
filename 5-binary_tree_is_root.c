#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - Check if node is the root
 *@node: The node you want check
 *Return: return 1 if is the root or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/*Check if node is NUll for return 0*/
	if (node == NULL)
		return (0);

	/*If the node don't have parent is the root and return 1*/
	if (node->parent == NULL)
		return (1);

	/*Else is not root and return 0*/
	else
		return (0);
}
