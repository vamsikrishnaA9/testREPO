#include<iostream>

using namespace std;

class Node{
public:
	int value;
	Node* next;

	
};

void printList(Node *n){
	
while(n!= NULL){
	

	cout<< n->value << endl;
	cout<< n<< endl;
	n= n->next;
	
}

}	

void insertAtTheFront(Node **head, int newValue){

//prepare a new node
Node *newNode = new Node();
newNode->value = newValue;
//put infront of the current head
newNode->next = *head;
cout<<newNode->value << endl;
// Move head of the list to point to the newNode
*head = newNode;

cout<<newNode->next << endl;	
}

void insertAtTheEnd(Node *head, int NewValue){
//prepare a newNode	

Node* newNode = new Node();
newNode->value = NewValue;
newNode->next = NULL;
//check the linked list is empty, newNode will be a head node.

if(*head == NULL){
	*head = newNode;
	return;
}
//Find the last node
Node *last = head;
while(last->next !=NULL){
	last= last->next;
	
	
}
 
//insert the NewNode after the last nodea	
	last->next = newNode;
	
}

void insertAfter(Node *previousNode, int newValue){

//1. check if previous node is NULL
if(previousNode == NULL){
	cout<<"Previous node can not be null"<<endl;
	return;
	
}

//2. prepare a newNode
Node *newNode= new Node();
newNode->value = newValue;
//3/ Insert newNode after previous 

newNode->next = previousNode->next;

previousNode->next = newNode;
	
	
}
int main(){
	
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	
	head->value = 1;
	second->value =2;
	third-> value =3;
	
	head->next = second;
	second->next = third;
	third->next =NULL;
	
	//cout<<second->next<<endl;
	//cout<<third->next<<endl;
	
	insertAtTheFront(&head, 9);
//	insertAtTheEnd(&head, 5);
//	insertAfter(head, 10);
//	insertAfter(second, 12);
	cout<<"\n"<<endl;
	printList(head);
	
	
	
	return 0;
	//system("pause>0");
	
}