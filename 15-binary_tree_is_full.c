#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_is_full - measures if binary tree is full
 * @tree: tree being traversed
 *
 * Return: 1 if yes, 0 if no
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_left_full = 0;
	int is_right_full = 0;

	if (tree == NULL)
	{
		return (0);
	}
	/*If is leaf node*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	is_left_full = binary_tree_is_full(tree->left);
	is_right_full = binary_tree_is_full(tree->right);

	return (is_left_full && is_right_full);
}
