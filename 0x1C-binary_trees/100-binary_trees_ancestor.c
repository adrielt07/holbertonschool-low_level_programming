#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to node that needs to be checked
 * Return: 0 if node is null or not root, else 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}

/**
 * binary_tree_depth - measures depth
 * @tree: pointer to node to measure depth
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	while (binary_tree_is_root(tree) != 1)
	{
		count++;
		tree = (tree)->parent;
	}
	return (count);
}

/**
 * binary_trees_ancestor - returns the least common ancestor of two nodes
 * @first: points to first node
 * @second: points to second node
 * Return: ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t f_num, s_num;

	if (first == NULL || second == NULL)
		return (NULL);

	f_num = binary_tree_depth(first);
	s_num = binary_tree_depth(second);

	while (f_num < s_num)
	{
		second = second->parent;
		s_num = binary_tree_depth(second);
	}
	while (s_num < f_num)
	{
		first = first->parent;
		f_num = binary_tree_depth(first);
	}
	if (first == second)
		return ((binary_tree_t *)first);

	while (binary_tree_depth(first) != 0)
	{
		if (first->parent == second->parent)
			return (first->parent);
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}
