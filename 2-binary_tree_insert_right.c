#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function
 * @parent: parameter
 * @value: parameter
 *
 * Return: something
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_right_node;

	if (parent == NULL)
		return (NULL);

	old_right_node = parent->right;

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	parent->right = new_node;
	new_node->right = old_right_node;

	if (old_right_node != NULL)
		old_right_node->parent = new_node;

	return (new_node);
}
