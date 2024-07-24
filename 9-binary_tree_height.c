#include "binary_trees.h"

/**
 * binary_tree_height - measures height of binary tree
 * @tree: binary tree to measure
 *
 * Return: height on success, 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);
	return ((height_l > height_r) ? 1 + height_l : 1 + height_r);
}
