#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: size of the binary tree or 0 if tree is NULL
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree != NULL)
	{
		size += 1;
		if (tree->left != NULL)
			size += binary_tree_size(tree->left);
		if (tree->right != NULL)
			size += binary_tree_size(tree->right);
		return (size);
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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is perfect or 0 otherwise.
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth_left, depth_right, full_left, full_right;

	depth_left = binary_tree_size(tree->left);
	depth_right = binary_tree_size(tree->right);
	full_left = binary_tree_is_full(tree->left);
	full_right = binary_tree_is_full(tree->right);

	if (tree != NULL)
	{
		if (depth_left == depth_right && full_left == 1 && full_right == 1)
			return (1);
	}

	return (0);
}
