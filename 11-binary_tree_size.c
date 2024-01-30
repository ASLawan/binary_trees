#include "binary_trees.h"
/**
 * binary_tree_size - computes the size of a binary tree
 * @tree: pointer to the root node
 * Return: size of binary or NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lt_size = 0;
	size_t rt_size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	lt_size = binary_tree_size(tree->left);
	rt_size = binary_tree_size(tree->right);

	return (1 + lt_size + rt_size);
}
