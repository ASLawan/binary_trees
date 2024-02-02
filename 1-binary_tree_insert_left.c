#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts newnode as left child
 * @parent: parent of node to be inserted
 * @value: value of node to be inserted
 * Return: newnode or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = binary_tree_node(parent, value);

	if (newnode == NULL || parent == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;
	return (newnode);
}
