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
	if (left_save->right != NULL)
		left_save->right->parent = tree;
	left_save->parent = tree->parent;
	tree->parent = left_save;
	tree->left = left_save->right;
	left_save->right = tree;
	return (left_save);
}
