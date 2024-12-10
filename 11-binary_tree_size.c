#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - function for count number of element on the tree
 *@tree: root of tree
 *Return: return the number of element
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int sum = 0;

	/*Check if the root is NULL and return 0*/
	if (tree == NULL)
		return (0);

	/*Browse the tree and add the return to the sum*/
	sum += binary_tree_size(tree->left);
	sum += binary_tree_size(tree->right);

	/*Return the sum and add 1 for this element*/
	return (sum + 1);
}
