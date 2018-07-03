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
 * binary_tree_leaves - counts leaves
 * @tree: pointer to node to measure depth
 * Return: return number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree->left) == 0)
		count = binary_tree_leaves(tree->left);
	if (binary_tree_is_leaf(tree->right) == 0)
		count = binary_tree_leaves(tree->right);
	return (count + 1);
}
