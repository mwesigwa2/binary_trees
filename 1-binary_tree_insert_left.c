#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	binary_tree_t *og_left = NULL;

	if (!parent)
		return (NULL);

	og_left = parent->left;

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	/**
	 * if new node successfully created and parent node has an existing
	 * left node
	 */
	if (new && parent->left)
	{
		new->left = og_left;
		og_left->parent = new;
	}
	parent->left = new;

	return (new);
}
