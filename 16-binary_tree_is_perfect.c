#include "binary_trees.h"
size_t b_size(const binary_tree_t *tree);
size_t b_depth(const binary_tree_t *tree);
/**
 * b_depth - Calculates the depth of a tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Depth of the tree
 */
size_t b_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree && tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

/**
 * b_size - Calculates the number of nodes in a tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes in the tree
 */
size_t b_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + b_size(tree->left) + b_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	int depth = b_depth(tree);
	size_t total_nodes = b_size(tree);

	size_t expected_nodes = (1 << (depth + 1)) - 1;

	return (total_nodes == expected_nodes);
}
