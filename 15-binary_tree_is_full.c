#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if all nodes have 0 or 2 children
 * @tree: binary tree
 *
 * Return: 1 if full, 0 if tree is null and if not full
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}

	if ((tree->left) && (tree->right))
	{
		return (
			binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right)
		);
	}
	return (0);
}
