#include <iostream>
#include "BinaryTree.h"

void BinaryTree::Insert (int key)
{
	if (root != nullptr)
	{
		Insert (key, root);
	}
	else
	{
		root = new node;
		root->value = key;
		root->layer = 0;
		root->parent = nullptr;
		root->left = nullptr;
		root->right = nullptr;
	}
}

void BinaryTree::Insert (int key, node* _node)
{
	if (key < _node->value)
	{
		if (_node->left == nullptr)
		{
			_node->left = new node;
			_node->left->parent = _node;
			_node->left->layer = _node->layer + 1;
			_node->left->value = key;
			_node->left->right = nullptr;
			_node->left->left = nullptr;
		}
		else
			Insert (key, _node->left);
	}
	else if (key >= _node->value)
	{
		if (_node->right == nullptr)
		{
			_node->right = new node;
			_node->right->parent = _node;
			_node->right->layer = _node->layer+1;
			_node->right->value = key;
			_node->right->left = nullptr;
			_node->right->right = nullptr;
		}
		else
			Insert (key, _node->right);
	}
}

node* BinaryTree::Search (int key)
{
	return Search(key, root);
}

node* BinaryTree::Search (int key, node* _node)
{
	if(_node == nullptr)
		return nullptr;
	if (key == _node->value)
		return _node;
	if (key < _node->value)
		return Search (key, _node->left);
	else
		return Search (key, _node->right);
}

void BinaryTree::Print ()
{
	Print (root);
	std::cout << "\n";
}

void BinaryTree::Print (node* _node)
{
	if (_node == nullptr)
		return;
	Print (_node->left);
	std::cout << _node->value << ",";
	Print (_node->right);
}

int BinaryTree::GetLayer (int key)
{
	return Search(key)->layer;
}