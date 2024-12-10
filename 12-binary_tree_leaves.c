#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - count the number of leaves on the tree
 *@tree: pointer to the root node
 *Return: return the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	/*If the two pointer is not NULL (not a leaf) use recursive*/
	if (tree->left != NULL || tree->right != NULL)
	{
		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);
	}
	/*If is a leaf return 1*/
	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*return the sum of all leaves*/
	return (count);
}
