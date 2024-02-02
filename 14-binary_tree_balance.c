#include "binary_trees.h"
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
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);
	return ((left_height - right_height) + 1);
}
