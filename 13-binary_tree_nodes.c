#include "binary_trees.h"
/**
 * binary_tree_nodes - computes number of leaf nodes
 * that have at least a child node
 * @tree: pointer to the root node of the tree
 * Return: number of leaves or NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lt_nodes = 0;
	size_t rt_nodes = 0;
	size_t has_child_nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	has_child_nodes = (tree->left != NULL || tree->right != NULL);

	lt_nodes = binary_tree_nodes(tree->left);
	rt_nodes = binary_tree_nodes(tree->right);

	return (has_child_nodes + lt_nodes + rt_nodes);
}
