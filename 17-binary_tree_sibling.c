#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node being checked
 *
 * Return: pointer to sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else if (node == node->parent->right)
	{
		return (node->parent->left);
	}
	else
	{
		return (NULL);
	}
}
