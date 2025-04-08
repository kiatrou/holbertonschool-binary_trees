#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_height - measures height of binary tree
 * @tree: tree being traveresed
 *
 * Return: tree height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (tree == NULL)
	{
		return (0);
	}

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (tree->left || tree->right)
	{
		if (height_left > height_right)
		{
			return (height_left + 1);
		}
		else
		{
			return (height_right + 1);
		}
	}
	else
	{
		return (0);
	}
}
