#include "BinaryTree.h"
#include <iostream>

int main ()
{
	//Example usage of binary tree
	
	BinaryTree* binaryTree = new BinaryTree();

	binaryTree->Insert (1);
	binaryTree->Insert (2);
	binaryTree->Insert (3);
	binaryTree->Insert (4);
	binaryTree->Insert (5);
	binaryTree->Insert (6);
	binaryTree->Insert (7);
	binaryTree->Insert (8);
	binaryTree->Insert (9);
	binaryTree->Insert (10);

	binaryTree->Print ();

	std::cout << binaryTree->Search (10)->value << " in layer " << binaryTree->GetLayer(10);

	return 0;
}