#include "binary_trees.h"

/**
 * tree_height - measures height of binary tree
 * @tree: binary tree to measure
 *
 * Return: height on success, 0 if tree is null
 */

size_t tree_height(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	height_l = tree_height(tree->left);
	height_r = tree_height(tree->right);
	return ((height_l > height_r) ? 1 + height_l : 1 + height_r);
}

/**
 * binary_tree_balance - calculates balance factor of a binary tree
 * @tree: binary tree
 *
 * Return: balance factor(int), 0 if tree is null
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (tree_height(tree->left) - tree_height(tree->right));
}
