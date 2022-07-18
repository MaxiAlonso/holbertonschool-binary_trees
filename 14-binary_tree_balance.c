#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balnce factor or 0 if tree is NULL
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			left_h = 1 + binary_tree_balance(tree->left);
		if (tree->right != NULL)
			right_h = 1 + binary_tree_balance(tree->right);
		return (left_h - right_h);
	}

	return (0);
}
