#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - function to delete an entire binary tree
 *@tree: pointer to the root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/*Check if tree is null*/
	if (tree != NULL)
	{
		/*Use recursive for pass to next node*/
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);

		/*Free node*/
		free(tree);
	}
}
