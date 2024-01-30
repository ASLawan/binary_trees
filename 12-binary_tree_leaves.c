#include "binary_trees.h"
/**
 * binary_tree_leaves - computes number of leaf nodes
 * @tree: pointer to the root node of the tree
 * Return: number of leaves or NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lt_leaves = 0;
	size_t rt_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	lt_leaves = binary_tree_leaves(tree->left);
	rt_leaves = binary_tree_leaves(tree->right);

	return (lt_leaves + rt_leaves);
}
