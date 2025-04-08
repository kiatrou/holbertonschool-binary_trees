#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_depth - measures depth of binary tree
 * @tree: tree being traveresed
 *
 * Return: tree height
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/*Move upwards to the root, counting each step*/
	while (tree != NULL && tree->parent != NULL)
	{
		/*Move to the parent node*/
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
