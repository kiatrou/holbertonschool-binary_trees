#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_right -  inserts a node as the
 * right-child of another node
 * @parent: parent of tree
 * @value: value of node
 *
 * Return: new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	/*Consider if position is occupied or not */
	if (parent->right != NULL)
	{
		new_node->parent = parent;
		new_node->right = parent->right;
		new_node->left = NULL;

		parent->right->parent = new_node;
	}
	else
	{
		new_node->parent = parent;
		new_node->right = NULL;
		new_node->left = NULL;
	}

	parent->right = new_node;
	return (new_node);
}
