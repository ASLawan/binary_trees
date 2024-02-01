#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node
 * Return: 1 if true and 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_perfect, right_perfect;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);

	if (tree->left != NULL && tree->right != NULL)
	{
		if (left_perfect == right_perfect)
		{
			return (1);
		}
	}

	return (left_perfect == right_perfect);

}
