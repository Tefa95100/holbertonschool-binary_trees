#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_sibling - Search the sibling of node
 *@node: pointer of node for search sibling
 *Return: return the pointer of siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/*Check wich child is the node and return the other child*/
	if (node->parent->left->n == node->n)
		return (node->parent->right);

	return (node->parent->left);
}
