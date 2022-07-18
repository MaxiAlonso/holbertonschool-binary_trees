#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the binary tree or 0 if tree is NULL
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			left_h = 1 + binary_tree_height(tree->left);
		if (tree->right != NULL)
			right_h = 1 + binary_tree_height(tree->right);
		if (left_h > right_h)
			return (left_h);
		return (right_h);
	}

	return (0);
}
