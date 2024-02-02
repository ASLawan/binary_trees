#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a given node
 * @node: node to check the uncle
 * Return: uncle or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (!node->parent)
	{
		return (NULL);
	}
	if (node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}
}
