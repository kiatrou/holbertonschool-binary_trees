#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_left -  inserts a node as the
 * left-child of another node
 * @parent: parent of tree
 * @value: value of node
 *
 * Return: new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		new_node->parent = parent;
		new_node->left = parent->left;
		new_node->right = NULL;

		parent->left->parent = new_node;
	}
	else
	{
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
	}

	parent->left = new_node;
	return (new_node);
}
