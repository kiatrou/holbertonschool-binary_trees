#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_height - helper function to calculate height
 * @tree: tree being traversed
 *
 * Return: tree height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: tree being traversed
 *
 * Return: 1 if yes, 0 if no
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
	int left_perfect = 0;
	int right_perfect = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	else
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		if (left_height == right_height)
		{
			left_perfect = binary_tree_is_perfect(tree->left);
			right_perfect = binary_tree_is_perfect(tree->right);
			return (left_perfect && right_perfect);
		}
		else
		{
			return (0);
		}
	}
}
