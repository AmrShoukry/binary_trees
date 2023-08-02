#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of
 *                       a binary tree
 * @tree: is a pointer to the root node of the tree to measure balance factor
 *
 * Return: a binary tree balance factor, If tree is NULL,
 *         your function must return 0
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 1;
	int right = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = (1 + binary_tree_balance(tree->left));

	if (tree->right != NULL)
		right = (1 + binary_tree_balance(tree->right));

	return (left - right);
}
