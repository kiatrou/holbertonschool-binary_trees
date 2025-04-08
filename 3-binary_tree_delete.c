#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_delete - deletes an entire
 * binary tree
 * @tree: tree being deleted
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}
	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}
	free(tree);
}
