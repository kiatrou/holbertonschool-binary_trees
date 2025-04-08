#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_size - measures size of binary tree
 * @tree: tree being traveresed
 *
 * Return: tree size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_of_left;
	size_t size_of_right;

	if (tree == NULL)
	{
		return (0);
	}

	size_of_left = binary_tree_size(tree->left);
	size_of_right = binary_tree_size(tree->right);

	return ((size_of_left + size_of_right) + 1);
}
