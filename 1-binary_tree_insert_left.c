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
	/*Using previous function to create new node*/
	new_node = binary_tree_node(parent, value);
	/*Set the left pointer of new node to current left child of parent*/
	new_node->left = parent->left;
	/*If not null, replace with new node*/
	if (new_node->left != NULL)
	{
		new_node->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
