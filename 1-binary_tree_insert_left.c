#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function
 * @parent: parameter
 * @value: parameter
 *
 * Return: something
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_left_node;

	if (parent == NULL)
		return (NULL);

	old_left_node = parent->left;

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	parent->left = new_node;
	new_node->left = old_left_node;

	if (old_left_node != NULL)
		old_left_node->parent = new_node;

	return (new_node);
}
