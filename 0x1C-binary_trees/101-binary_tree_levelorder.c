#include "binary_trees.h"

/**
 * traverse_print - helps print if tree node is a child
 * @tree: pointer to node
 * @func: function to print value
 * @n: if = 0, print root first one time
 */
void traverse_print(const binary_tree_t *tree, void (*func)(int), int n)
{
	if (n == 0)
		func(tree->n);
	if (tree->left != NULL)
		func(tree->left->n);
	if (tree->right != NULL)
		func(tree->right->n);
	if (tree->left != NULL)
		help(tree->left, func, 1);
	if (tree->right != NULL)
		help(tree->right, func, 1);
}

/**
 * binary_tree_levelorder - prints BT using level-order traversal
 * @tree: pointer to node
 * @func: pointer to function to print
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	help(tree, func, 0);
}
