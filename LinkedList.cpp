#include<iostream>
#include"LinkedList.h"

LinkedList::LinkedList(){
	head=NULL;
}
bool LinkedList:: isempty(){
	if(head==NULL){
	return true;
}
	else{
		return false;
		}
}
void LinkedList::AddNode(int newValue){
	if(isempty()){
				Node *newNode;
				newNode->data=newValue;
				newNode->next=NULL;
				head=newNode;
			}
			else{
				Node *newNode; 
				newNode->data=newValue;
				newNode->next=head; 
				head=newNode;
			}
}
void LinkedList::Delete(int item){
	if(isempty()){
			cout << "List is empty, no items to delete" << endl;
			}
			if(head->data==item){
				Node *newptr=head;
				head=head->next;
				delete newptr;
			}
			else{
				Node *before=NULL;
				newptr=head;
				while(newptr->data!=item){
					before=newptr;
					newptr=before->next
					
				}
				before->next=newptr->next;
				delete newptr;
			}	
}
void LinkedList::printList(){
		Node *current=head;
		while (current !=NULL){
			cout << current->data << " ";
			current=curent->next;
		}
		cout <<endl;
}
void LinkedList::createFromVector(vector<int>vec){
		LinkedList list; 
		for(int i=0;i<vec.size(); i++){
			bool found=false;
			Node *temp=list.head;
			while(temp!=NULL){
				if(temp->value==vec[i]){
				temp->count++;
				found=true;
				break;
			}
			temp=temp->next;
		}
		if(!isfound){
			list.AddNode(vec[i]);
		}
		}
		return list;
}
int LinkedList::sumNode(){
		int sum=0;
			Node *curr=head;
			while(curr!=NULL){
				sum+=curr->value*curr->count;
				curr=curr->next;
			}
			return sum;
	
}
bool LinkedList::isfound(int key){
		bool found=false;
		Node *temp=head;
		while (temp!=NULL){
		if(temp->data==key){
		found=true;
			}
			return found;
			}
}
