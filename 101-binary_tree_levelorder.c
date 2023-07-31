#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: a binary tree size, If tree is NULL, your function must return 0
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		size += binary_tree_size(tree->left);

	if (tree->right != NULL)
		size += binary_tree_size(tree->right);

	return (size);
}


/**
 * binary_tree_levelorder - a function that goes through a binary tree
 *                          using level-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node.
 *
 * Return: Nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int front = 0;
	int rear = 0;
	binary_tree_t *node = (binary_tree_t *)tree;

	if (tree == NULL || func == NULL)
		return;

	int size = binary_tree_size(tree);
	binary_tree_t *array[size];

	array[rear] = node;

	while (rear >= front)
	{
		if (node->left != NULL)
			array[++rear] = node->left;

		if (node->right != NULL)
			array[++rear] = node->right;

		func(array[front]->n);
		front++;
		node = array[front];
	}
}
