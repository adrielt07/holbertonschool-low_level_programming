#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of node
 * @node: pointer to node
 * Return: NULL if sibling don't exists or node is null, else ptr to sibling
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
 * Return: return NULL if node is NULL or node has no uncle,
 * else pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
