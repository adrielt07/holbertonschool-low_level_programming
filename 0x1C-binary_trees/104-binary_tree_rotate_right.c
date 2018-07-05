#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate tree to right
 * @tree: pointer to tree
 * Return: pointer to new tree root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left_save;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	left_save = tree->left;
	left_save->parent = tree->parent;
	tree->left = left_save->right;
	left_save->right = tree;
	tree->parent = left_save;

/*	right_save = tree->right;
	right_save->parent = tree->parent;
	tree->right = right_save->left;
	right_save->left = tree;
	tree->parent = right_save;
*/	return (left_save);
}
