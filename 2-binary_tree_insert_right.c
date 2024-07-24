#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of parent
 * @parent: right node's parent
 * @value: right node's value
 * Return: pointer to created right node
 *	  null on failure or if parent is null
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent != NULL)
	{
		binary_tree_t *node = malloc(sizeof(binary_tree_t));

		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
		node->n = value;
		if (node != NULL)
		{
			if (parent->right != NULL)
			{
				node->right = parent->right;
				parent->right->parent = node;
			}
			parent->right = node;
			return (node);
		}
		return (NULL);
	}
	return (NULL);
}
