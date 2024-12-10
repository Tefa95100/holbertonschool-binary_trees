#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - Count number of node except the leaf node
 *@tree: pointer of root
 *Return: return the number of node except leaf
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int sum = 0;

	if (tree == NULL)
		return (0);

	/*Browse the tree and add the return to the sum*/
	sum += binary_tree_nodes(tree->left);
	sum += binary_tree_nodes(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (sum);
	else
		return (sum + 1);
}
