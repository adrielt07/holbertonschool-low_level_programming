#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate tree to left
 * @tree: pointer to tree
 * Return: pointer to new tree root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right_save;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	right_save = tree->right;
	right_save->parent = tree->parent;
	tree->right = right_save->left;
	right_save->left = tree;
	tree->parent = right_save;
	return (right_save);
}
