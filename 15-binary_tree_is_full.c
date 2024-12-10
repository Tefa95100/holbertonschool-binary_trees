#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - Check if a binary tree is full
 *@tree: pointer for node
 *Return: return 1 if tree is full else return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left = 2;
	int full_right = 2;

	if (tree == NULL)
		return (0);

	/*Check if the 2 pointer is not NUll and call function in recursive*/
	if (tree->left != NULL && tree->right != NULL)
	{
		full_left = binary_tree_is_full(tree->left);
		full_right = binary_tree_is_full(tree->right);
	}
	/*Check if the node is a leaf and return 1*/
	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*If the 2 value is 1 is complete*/
	if (full_left == 1 && full_right == 1)
	{
		return (1);
	}

	return (0);
}
