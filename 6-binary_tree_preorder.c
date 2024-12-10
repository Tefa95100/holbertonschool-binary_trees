#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - function to traverse using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Check if tree and func are not null*/
	if (tree == NULL || func == NULL)
		return;

	/*Call func on the current node*/
	func(tree->n);

	/*Traverse left subtree*/
	binary_tree_preorder(tree->left, func);

	/*Traverse right subtree*/
	binary_tree_preorder(tree->right, func);
}
