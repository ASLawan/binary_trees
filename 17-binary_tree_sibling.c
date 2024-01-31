#include "binary_trees.h"
/**
 * binary_tree_sibling - checks if two nodes are siblings
 * @node: node to check
 * Return: 1 on success, 0 otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
