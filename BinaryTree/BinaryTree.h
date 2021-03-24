#pragma once

struct node
{
	int value;
	int layer;
	node* parent;
	node* left;
	node* right;
};

class BinaryTree
{
node* root;
public:
	void Insert (int key);
	node* Search (int key);
	void Print ();
	int GetLayer (int key);
private:
	void Insert (int key, node* node);
	node* Search (int key, node* node);
	void Print (node* node);
};