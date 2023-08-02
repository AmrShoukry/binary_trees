#include "binary_trees.h"


/**
 * binary_tree_is_complete - a function that checks if binary tree is complete
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */

int check_is_max(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right == NULL)
		if (tree->n < tree->left->n)
			return (0);

	if (!(tree->n > tree->left->n && tree->n > tree->right->n))
		return (0);

	return (check_is_max(tree->left) && check_is_max(tree->right));
}

/**
 * binary_tree_is_heap - a function that checks if a binary tree
 *                       is a valid Max Binary Heap
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid Max Binary Heap, and 0 otherwise
 */


int binary_tree_is_heap(const binary_tree_t *tree)
{
	int max;

	if (tree == NULL)
		return (0);


	max = check_is_max(tree);

	if (max == 0)
		return (0);

	return (1);
}



