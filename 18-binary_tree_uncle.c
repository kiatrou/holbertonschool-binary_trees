#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node being checked
 *
 * Return: pointer to uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	else if (node->parent == node->parent->parent->right)
	{
		return (node->parent->parent->left);
	}
	else
	{
		return (NULL);
	}
}
