#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 * If tree is NULL, return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)

{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
	{
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
			return (1);
		else if (tree->left == NULL && tree->right == NULL)
			return (1);
	}
	return (0);
}

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