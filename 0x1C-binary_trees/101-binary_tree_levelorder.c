#include "binary_trees.h"

/**
 * binary_tree_levelorder - prints BT using level-order traversal
 * @tree: pointer to node
 * @func: pointer to function to print
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->parent == NULL)
		func(tree->n);
	if (tree->left != NULL)
		func(tree->left->n);
	if (tree->right != NULL)
		func(tree->right->n);
	if (tree->left != NULL)
		binary_tree_levelorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_levelorder(tree->right, func);
}
