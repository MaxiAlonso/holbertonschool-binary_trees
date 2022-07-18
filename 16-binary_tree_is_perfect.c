#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
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
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int _left = 0, _right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	_left = binary_tree_height(tree->left);
	_right = binary_tree_height(tree->right);
	if (_left > _right)
		return (_left + 1);
	else
		return (_right + 1);
}

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int _right = 0, _left = 0;

	if (tree == NULL)
		return (0);

	_left = binary_tree_size(tree->left);
	_right = binary_tree_size(tree->right);

	return (_left + 1 + _right);
}