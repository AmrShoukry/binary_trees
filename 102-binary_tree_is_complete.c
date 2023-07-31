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
 * binary_tree_is_complete - a function that checks if binary tree is complete
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int front = 0;
	int rear = 0;
	binary_tree_t *node = (binary_tree_t *)tree;

	if (tree == NULL)
		return (0);

	int size = binary_tree_size(tree);
	binary_tree_t *array[size];

	array[0] = node;

	while (rear >= front)
	{
		if (node->left != NULL)
			array[++rear] = node->left;

		if (node->right != NULL)
			array[++rear] = node->right;

		if (node->right != NULL && node->left == NULL)
			return (0);

		if (node->left != NULL && node->right == NULL && rear != size - 1)
			return (0);

		front++;
		node = array[front];
	}

	return (1);
}

