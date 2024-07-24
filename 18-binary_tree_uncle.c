#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: pointer of node to check
 *
 * Return: pointer to uncle, NULL otherwise
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
	{
		return (grandparent->right);
	}
	if (grandparent->right == node->parent)
	{
		return (grandparent->left);
	}
	return (NULL);
}
