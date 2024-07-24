#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: node's parent
 * @value: node's value
 * Return: pointer to created node
 *	null on failure or if parent is null
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node)
	{
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
		node->n = value;
		return (node);
	}
	else
	{
		return (NULL);
	}
}
