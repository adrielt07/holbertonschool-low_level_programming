#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate tree to right
 * @tree: pointer to tree
 * Return: pointer to new tree root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left_save;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	left_save = tree->left;
	tree->left = left_save->right;
	left_save->parent = tree->parent;
	left_save->right = tree;
	tree->parent = left_save;
	return (left_save);
}
