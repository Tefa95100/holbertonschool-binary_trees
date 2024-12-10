#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - function to traverse using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))

{
	/*Check if tree and func are not null*/
	if (tree == NULL || func == NULL)
		return;

	/*Traverse left subtree*/
	binary_tree_postorder(tree->left, func);

	/*Traverse right subtree*/
	binary_tree_postorder(tree->right, func);

	/*Call func on the current node*/
	func(tree->n);
}
