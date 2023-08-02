#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_avl - checks if a tree is a valid avl tree
 * @tree: the tree to check
 * Return: 1 if valid AVL tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int leftHeight = 0;
	int rightHeight = 0;
	int difference;
	if (tree->left != NULL)
		leftHeight = (int)binary_tree_size(tree->left);
	if (tree->right != NULL)
		rightHeight = (int)binary_tree_size(tree->right);
	difference = leftHeight - rightHeight;
	if (difference >= 2 || difference <= -2)
		return (0);
	return (1);
}
