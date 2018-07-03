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
 * binary_tree_height - measures the heigh of binary tree
 * @tree: pointer to node to measure height
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
 * max_elem_calc - calculates the maximum posible number of node in binary tree
 * at certain level
 * @height: takes height of binary tree
 * Return: number of possible node
 */
int max_elem_calc(int height)
{
	int count = 0, first_calc = 1;

	while (height > 0)
	{
		if (first_calc == 1)
			count += 1 * 2;
		else
			count += count * 2;
		first_calc = 0;
		height--;
	}
	if (count > 1)
		count++;
	return (count);
}

/**
 * binary_tree_size - measure the size of Binary Tree
 * @tree: pointer to node to measure depth
 * Return: returns the size of binary
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - chceks if binary tree is perfect
 * @tree: pointer to root node
 * Return: return 0 if tree is NULL, else 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, max_elem = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	max_elem = max_elem_calc(height);
	if (max_elem == binary_tree_size(tree))
		return (1);
	return (0);
}
