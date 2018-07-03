#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of node
 * @node: pointer to node
 * Return: point to sibling, else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - find the uncle of node
 * @node: pointer to node
 * Return: return pointer to uncle; else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
