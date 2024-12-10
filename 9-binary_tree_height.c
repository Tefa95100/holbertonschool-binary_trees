#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - Give the height of node
 *@tree: the root of tree
 *Return: return the number of node browse
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	/*Check if tree is NULL and return 0*/
	if (tree == NULL)
		return (0);
	
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/*Browse the tree and stock the return*/
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	
	/*Compare to keep the greatest value and return +1*/
	if (height_left >= height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
