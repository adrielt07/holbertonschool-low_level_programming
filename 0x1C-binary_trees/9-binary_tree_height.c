#include "binary_trees.h"

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
			return 1;
	}
	return 0;
}

/**
 * binary_tree_height - measures the heigh of binary tree
 * @tree: pointer to node to measure height
 * Return: return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0, count2 = 0;

	if ((tree == NULL) || (tree->left == NULL && tree->right == NULL))
		return (0);
	if (binary_tree_is_leaf(tree->left) != 1)
	{
		++count;
		binary_tree_height(tree->left);
	}
	if (binary_tree_is_leaf(tree->right) != 1)
	{
		++count;
		binary_tree_height(tree->right);
	}
	if (count >= count2)
		return (count);
	return (count2);
}
