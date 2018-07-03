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
			return (1);
	}
	return (0);
}

/**
 * binary_tree_height - measures the height of binary tree
 * @tree: pointer to node to measure height from
 * Return: return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0, count2 = 0;

	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
		return (0);
	count = binary_tree_height(tree->left);
	count2 = binary_tree_height(tree->right);
	if (count > count2)
		return (count + 1);
	return (count2 + 1);
}

/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: pointer to node to measure balance factor from
 * Return: return balance, else 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int num_l = 1, num_r = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		num_l += binary_tree_height(tree->left);
	else
		num_l = 0;
	if (tree->right != NULL)
		num_r += binary_tree_height(tree->right);
	else
		num_r = 0;
	return (num_l - num_r);
}
