#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)

{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}


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