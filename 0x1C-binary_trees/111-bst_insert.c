#include "binary_trees.h"

/**
 *
 */
bst_t *helper(bst_t *root, bst_t *node, int n)
{
	if (n == 1)
	{
		if (root != NULL)
			printf("value of root %d\n", root->n);
		if (root->left != NULL)
		{
			if (root->n > node->n)
				helper(root->left, node, 1);
			if (root->n < node->n)
				helper(root->right, node, 2);
		}
		if (root->n > node->n)
		{
			if (root->left == NULL)
			{
				node->left = root->left;
				node->right = NULL;
				node->parent = root;
				root->left = node;
			}
		}
	}
	if (n == 2)
	{
		if (root->right != NULL)
			helper(root->right, node, 2);
		if (root->n < node->n)
		{
			if (root->right == NULL)
			{
				node->right = root->right;
				node->left = NULL;
				node->parent = root;
				root->right = node;
			}
		}
	}
	return (node);
}

/**
 * bst_insert - inserts a value in a Binary Search tree
 * @tree: double pointer to the root node of the BST
 * @value: value inside the new node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *root;

	new = malloc(sizeof(bst_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	root = *tree;
	if (root == NULL)
	{
		new->parent = NULL;
		new->left = NULL;
		new->right = NULL;
		*tree = new;
		return (new);
	}
	if (root->n > value)
		helper(root, new, 1);
	if (root->n < value)
		helper(root, new, 2);
	return (new);
}
