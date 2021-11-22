#include<iostream>
#include<conio.h>
using namespace std;

struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;
};

BstNode* GetNewNode(int data)
{
	BstNode* NewNode = new BstNode();
	NewNode->data = data;
	NewNode->left = NewNode->right = NULL;
	return NewNode;
}

BstNode* Insert(BstNode* root, int data)
{
	if (root == NULL)
	{
		root = GetNewNode(data);
	}
	else if (data <= root->data)
	{
		root->left = Insert(root->left, data);
	}
	else
	{
		root->right = Insert(root->right, data);
	}
	return root;
}

bool Search(BstNode* root, int data)
{
	if (root == NULL)
	{
		return false;
	}
	else if (data == root->data)
	{
		return true;
	}
	else if (data <= root->data)
	{
		return Search(root->left, data);
	}
	else
	{
		return Search(root->right, data);
	}
}

void PreOrder(BstNode* root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << endl;
	PreOrder(root->left);
	PreOrder(root->right);	
}
void InOrder(BstNode* root)
{
	if (root == NULL)
	{
		return;
	}
	PreOrder(root->left);
	cout << root->data << endl;
	PreOrder(root->right);
}
void PostOrder(BstNode* root)
{
	if (root == NULL)
	{
		return;
	}
	PreOrder(root->left);
	PreOrder(root->right);
	cout << root->data << endl;
}

int main()
{
	BstNode* root = NULL;
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 25);
	root = Insert(root, 8);
	root = Insert(root, 12);
	int num;
	cout << "Enter Number to search: ";
	cin >> num;
	if (Search(root, num) == true)
	{
		cout << "found";
	}
	else
	{
		cout << "not found" << endl;
	}
	cout << "Pre Order" << endl;
	PreOrder(root);
	cout << "In Order" << endl;
	InOrder(root);
	cout << "Post Order" <<endl;
	PostOrder(root);

	_getch();
	return 0;
}
