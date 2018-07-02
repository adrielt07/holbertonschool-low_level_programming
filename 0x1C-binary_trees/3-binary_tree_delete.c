#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: root of the binaray
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}
