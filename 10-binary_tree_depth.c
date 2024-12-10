#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Give the depth of node
 *@tree: the root of tree
 *Return: return the number of node browse
 */

size_t binary_tree_depth(const binary_tree_t *tree)

{
	int depth = 0;

	/*Check if tree is NULL and return 0*/
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	/*Browse the tree and stock the return*/
	depth = binary_tree_depth(tree->parent);
	depth++;

	/*Return the number of node browse*/
	return (depth);
}

