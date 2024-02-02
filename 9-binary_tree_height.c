#include "binary_trees.h"
/**
 * binary_tree_height - computes height of binary tree
 * @tree: pointer to root node
 * Return: height or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
	{
		return (0);
	}
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return ((lh > rh) ? (lh + 1) : (rh + 1));
}
