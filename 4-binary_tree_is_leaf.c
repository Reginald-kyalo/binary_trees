#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: node to check
 * Return: 1 if leaf 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((node != NULL && node->left == NULL && node->right == NULL) ? 1 : 0);
}
