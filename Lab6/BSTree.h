#ifndef BSTREE_H
#define BSTREE_H
#include <string>
class BSTree{

	//creating an internal node class
	class Node{
		public:
		int data;
		Node* left = NULL;
		Node* right = NULL;
		Node(int val){
			data = val;
		};
	};
	
	public:
	Node* root;
	BSTree();
	bool empty();
	bool insert(int val);
	bool insert(int val, Node* node);
	bool find(int val);
	bool find(int val, Node* node);
};
#endif
