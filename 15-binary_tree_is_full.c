#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to tht root node
 * Return: 1 if true and 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if ((tree->left && tree->right) && (binary_tree_is_full(tree->left)
	    && binary_tree_is_full(tree->right)))
	{
		return (1);
	}

	return (0);
}
