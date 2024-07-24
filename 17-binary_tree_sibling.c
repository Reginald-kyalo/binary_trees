#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: pointer to node of binary tree
 *
 * Return: Pointer to sibling node, otherwise NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *parent = node->parent;

	if (parent->left == node)
	{
		return (parent->right);
	}

	if (parent->right == node)
	{
		return (parent->left);
	}

	return (NULL);
}
