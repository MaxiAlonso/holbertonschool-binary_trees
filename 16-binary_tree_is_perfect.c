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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is perfect or 0 otherwise.
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size_left = 0, size_right = 0, height_left = 0, height_right = 0;

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (tree != NULL)
	{
		if (size_left == size_right && height_left == height_right)
			return (1);
	}

	return (0);
}
