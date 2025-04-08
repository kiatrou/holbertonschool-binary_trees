#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_leaves - counts leaves in binary tree
 * @tree: tree being traveresed
 *
 * Return: count of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	/*Recursively count leaves in the left and right subtrees*/
}
