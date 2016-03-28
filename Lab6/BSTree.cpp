#include "BSTree.h"
using namespace std;

//default BSTree constructor
BSTree::BSTree(){
	root = NULL;
}

//checks to see if the tree has no nodes
bool BSTree::empty(){
	return root == NULL;
}


//inserts node into root if tree is empty, otherwise enters recursion
bool BSTree::insert(int val){
	if(empty()){
		root = new Node(val);
		return true;
	}
	return insert(val, root);
}

//recurses by passing right if val > data, left if val < data sets right or left if they are NULL
bool BSTree::insert(int val, Node* node){
	if(val > node->data){
		if(node->right == NULL){
			node->right = new Node(val);
			return true;
		}
		else
			return insert(val, node->right);
	}
	else if(val < node->data){
		if(node->left == NULL){
			node->left = new Node(val);
			return true;
		}
		else
			return insert(val, node->left);
	}
	return false;
}

//checks to see if tree is empty then recurses to find the correct node
bool BSTree::find(int val){	
	if(empty())
		return false;	
	return find(val, root);
}

//functions similar to insert but only returns true if the parameter is in the tree
bool BSTree::find(int val, Node* node){
	if(node == NULL)
		return false;	
	if(node->data == val)
		return true;
	else if(val > node->data)
		return find(val, node->right);
	else if(val < node->data)
		return find(val, node->left);
	else
		return false;
}
