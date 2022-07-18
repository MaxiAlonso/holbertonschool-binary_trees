#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0 if node is NULL, return 0
 **/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if ((node->left == NULL) & (node->right == NULL))
			return (1);
	}
	return (0);
}

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is full or 0 otherwise.
 **/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL) & (tree->right == NULL))
			return (1);
		if ((tree->left == NULL) || (tree->right == NULL))
			return (0);

		return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
	}

	return (0);
}
