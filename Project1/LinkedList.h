#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

template<class M>
class Node{
	Node<M>* next;
	M data;
	public:
	Node(){next = NULL; data = NULL;};
	Node(M data){this->data = data; next = NULL;};
	void setNext(Node<M>* node){next = node;}
	void setData(M data){this->data = data;}
	Node* getNext(){return next;}
	M getData(){return data;}
};

template<class M>
class LinkedList{
	Node<M>* head;
	Node<M>* current;
	public:
	LinkedList();
	~LinkedList();
	LinkedList(LinkedList<M> &cp);
	void insert(M d);
	M read();
	void update(M d);
	void remove();
	void remove(M d);
	bool next();
	bool hasNext();
	bool isEmpty();
	void reset();
	void operator <<(M i);
	void operator ++();
	void operator ++(int i);
};

template<class M>
LinkedList<M>::LinkedList(){
	head = NULL;
	current = NULL;
}

template<class M>
LinkedList<M>::LinkedList(LinkedList<M> &cp){
	head = NULL;
	current = NULL;
	cp.reset();
	if(cp.isEmpty() == false){
		this->insert(cp.read());
		while(cp.next()){
			this->insert(cp.read());
		}
	}
}

template<class M>
LinkedList<M>::~LinkedList(){
	this->reset();	
	while(head != NULL){
		this->remove();	
	}
	this->remove();
	current = NULL;
}

template<class M>
void LinkedList<M>::insert(M d){
	Node<M>* node = new Node<M>(d);
	if(head == NULL){
		head = node;
		current = head;
	}
	else{
		Node<M>* temp = head;
		while(temp!= NULL && temp->getNext()!= NULL){
			temp = temp->getNext();
		}
		temp->setNext(node);
	}
}

template<class M>
M LinkedList<M>::read(){
	M m;
	if(head != NULL)
		return current->getData();
	else return m;
}

template<class M>
void LinkedList<M>::update(M d){
	if(head != NULL)	
		current->setData(d);
}

template<class M>
void LinkedList<M>::remove(){
	if(head == NULL){	
		return;
	}
	if(head->getNext() == NULL){
		Node<M>* del = head;
		head = NULL;
		delete del;
		current = NULL;
		return;
	}
	Node<M>* temp = head;
	Node<M>* temp2 = head;
	while(temp->getNext() != NULL){
		temp = temp->getNext();
	}
	while(temp2->getNext() != temp){
		temp2 = temp2->getNext();
	}
	delete temp;
	temp2->setNext(NULL);
	current = temp2;
}

template<class M>
void LinkedList<M>::remove(M d){
	if(head == NULL){
		return;
	}
	if(head->getNext() == NULL){
		if(head->getData() == d){
			Node<M>* del = head;
			head = NULL;
			delete del;
			current = NULL;
		}
		return;	
	}
	Node<M>* temp = head;
	Node<M>* temp2 = head;
	while(temp->getNext() != NULL && temp->getData() != d){
		temp = temp->getNext();
		//cout << "loop1" << endl;
	}
	while(temp2->getNext() != temp && temp2 != temp){
		temp2 = temp2->getNext();
		//cout << "loop2" << endl;
	}
	if(temp2 == temp){
		head = temp->getNext();
		delete temp;
		current = head;
	}
	else if(temp->getNext() == NULL){
		delete temp;
		temp2->setNext(NULL);
		current = temp2;
	}
	else{
		temp2->setNext(temp->getNext());
		delete temp;
		current = temp2;
	}
}

template<class M>
bool LinkedList<M>::next(){
	if(current != NULL && current->getNext()!=NULL){
		current = current->getNext();
		return true;
	}
	return false;
}

template<class M>
bool LinkedList<M>::hasNext(){
	return(current->getNext()!=NULL);
}

template<class M>
bool LinkedList<M>::isEmpty(){
	return(head==NULL);
}

template<class M>
void LinkedList<M>::reset(){
	if(current != NULL){
		current = head;
		//cout <<"IN reset" <<endl;
	}
}

template<class M>
void LinkedList<M>::operator <<(M i){
	this->insert(i);
}

template<class M>
void LinkedList<M>::operator ++(){
	this->next();
}

template<class M>
void LinkedList<M>::operator ++(int i){
	this->next();
}
#endif
