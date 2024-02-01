#include "binary_trees.h"
/**int get_height(const binary_tree_t *node, size_t height)
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
}*/
/**
 * binary_tree_balance - computes the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance factor or NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	
	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);
	
	return ((left_height - right_height) + 1);
}
