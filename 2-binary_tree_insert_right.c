#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node
 * as the right-child of another node
 * @parent: Parent node
 * @value: Value of the node
 *
 * Return: NULL if fails else the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child_node;

	if (parent == NULL)
		return (NULL);

	child_node = binary_tree_node(parent, value);
	if (child_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		child_node->right = parent->right;
		parent->right->parent = child_node;
	}

	parent->right = child_node;
	return (child_node);
}
