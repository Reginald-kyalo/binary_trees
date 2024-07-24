#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of node
 * @tree: node of tree to measure
 * Return: depth(size_t) on success, 0 if tree null
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	int depth = 0;
	const binary_tree_t *current = malloc(sizeof(binary_tree_t));

	current = tree;
	while (current && current->parent)
	{
		depth++;
		current = current->parent;
	}
	return (depth);
}
