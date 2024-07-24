#include "binary_trees.h"

/**
 * binary_tree_nodes - counts number of nodes of binary tree
 *						with atleast one child
 * @tree: binary tree
 * Return: number of nodes, 0 on failure
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t count = 0;

	if (tree->left != NULL || tree->right != NULL)
	{
		count = 1;
	}

	return (
		count + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right)
	);
}
