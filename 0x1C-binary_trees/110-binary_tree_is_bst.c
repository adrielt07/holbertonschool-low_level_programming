#include "binary_trees.h"

/**
 *
 */
int check_bst(const binary_tree_t *node, int n)
{
	if (n == 0 || node == NULL)
		return (0);

	if (node->left != NULL)
	{
		if (node->left->n > node->n)
			check_bst(node->parent, 0);
		else
			check_bst(node->left, 1);
	}
	if (node->right != NULL)
	{
		if (node->right->n < node->n)
			check_bst(node->parent, 0);
		else
			check_bst(node->right, 1);
	}
	return (1);
}


/**
 * binary_tree_is_bst - checks if a binary tree is a Binary search tree
 * @tree: pointer to tree node
 * Return: 1 if it's BST, else 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int ret;

	ret = check_bst(tree, 1);
	if (ret == 0)
		return (0);
	return (1);
}
