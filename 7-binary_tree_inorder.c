#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - Browse the tree in order
 *@tree: pointer to the root of tree
 *@func: pointer to function with integer value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		/*Browse the tree with recursive */
		binary_tree_inorder(tree->left, (*func));
		/*use function with the integer */
		/*First pointer, data, second pointer for the order traversak*/
		func(tree->n);
		binary_tree_inorder(tree->right, (*func));
	}
}
