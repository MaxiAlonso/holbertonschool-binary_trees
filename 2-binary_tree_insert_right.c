#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to put in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *old_right = NULL;

	if (parent != NULL)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
			return (NULL);

		new_node->parent = parent;
		new_node->n = value;
		new_node->right = NULL;
		new_node->left = NULL;

		old_right = parent->right;
		parent->right = new_node;

		if (old_right != NULL)
		{
			old_right->parent = new_node;
			new_node->right = old_right;
		}
	}

	return (new_node);
}
