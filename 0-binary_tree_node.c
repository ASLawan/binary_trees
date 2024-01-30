#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: parent of node to be created
 * @value: value of node to be created
 * Return: node to be created or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
