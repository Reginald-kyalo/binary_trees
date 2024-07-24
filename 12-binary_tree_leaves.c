#include "binary_trees.h"
/**
 * binary_tree_leaves - counts number of leaves in tree
 * @tree: root of tree to count leaves
 * Return: depth(size_t) 0 if tree is null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
