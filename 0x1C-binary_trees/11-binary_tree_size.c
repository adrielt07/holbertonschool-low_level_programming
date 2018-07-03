#include "binary_trees.h"

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
