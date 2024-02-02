#include "binary_trees.h"
/**
 * get_height - computes tree height
 * @node: pointer to tree node
 * @height: height of tree
 * Return: height
 */

int get_height(const binary_tree_t *node, size_t height)
{
	if (node->left)
	{
		return (get_height(node->left, height + 1));
	}
	if (node->right)
	{
		return (get_height(node->right, height + 1));
	}
	return (height);
}

/**
 * binary_tree_height - computes height of binary tree
 * @tree: pointer to root node
 * Return: height or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		lh = get_height(tree, 0);
	}
	if (tree->right)
	{
		rh = get_height(tree, 0);
	}
	return (lh > rh ? lh : rh);
}
