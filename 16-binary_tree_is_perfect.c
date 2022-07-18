#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is perfect or 0 otherwise.
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_size = 0, right_size = 0, left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_size == right_size && left_height == right_height)
		return (1);
	else
		return (0);
}

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
