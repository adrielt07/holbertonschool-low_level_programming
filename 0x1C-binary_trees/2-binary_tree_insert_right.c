#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node at the right of BT
 * @parent: pointer to the parent
 * @value: value of the new node
 * Return: pointer to new node, else NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = parent->right;
	if (new->right != NULL)
		new->right->parent = new;
	parent->right = new;
	new->parent = parent;
	return (new);
}
