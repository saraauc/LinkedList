#include<iostream>
#include<vector>

class Node{
	public: 
	int value; 
	int data;
	int count; 
	Node *next; 
};
class LinkedList{
	private:
		Node *head;
	public:
		LinkedList();
		bool is empty();
		void AddNode(int newValue);
		void Delete(int item);
		void printList();
		int sumNode();
		void createFromVector(vector<int>vec);
		bool isfound(int key);
};


