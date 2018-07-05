#include "binary_trees.h"

/**
 * child_check - checks if a node only has one child

 */
int child_check(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL && node->right == NULL)
		return (1);
	if (node->right != NULL && node->left == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: pointer to node that will be checked
 * Return: 0 if node is null or not a leaf, else 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	return (0);
}

/**
 * binary_tree_is_full - checks if node and its sub trees are full
 * @tree: pointer to root node
 * Return: 1 if full, else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	if (tree == NULL)
		return (0);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (binary_tree_is_leaf(tree) != 0)
	{
		if (child_check(tree) == 1)
			return (0);
		else
			return (1);
	}
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
