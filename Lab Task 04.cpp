#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node* next;
};

node* head = NULL;

void insert(int item){
	node *NewNode = (node*) malloc(sizeof(node));
	NewNode -> data = item;
	NewNode -> next = head;
	
	head = NewNode;
	cout<<"\n\nData Inserted";
	cout<<"\n\nPress any key to continue...";
	getch();
}


void display(){
	if(head == NULL){
		cout<<"\n\nError: Empty List!";
		cout<<"\n\nPress any key to continue...";
		getch();
		return;
	}
	node *NewNode = (node*) malloc(sizeof(node));
	NewNode = head;
	cout<<"\n\nData in the List:\n\n";
	while(NewNode != NULL){
		cout<<NewNode -> data<<" ";
		NewNode = NewNode -> next;
	}
	cout<<"\n\nPress any key to continue...";
	getch();
}

int main(){
	int choice, item, position;
	up:
	system("cls");
	cout<<"\n\n\tCHOOSE from below";
	cout<<"\n\n\t1. Insert Data";
	cout<<"\n\t2. Display Data";
	
	cout<<"\n\t4. Exit\n\n\t";
	cin>>choice;
	if(choice == 1){
		cout<<"\n\nEnter a value: ";
		cin>>item;
		insert(item);
		goto up;
	}
	else if(choice == 2){
		display();
		goto up;
	}
	else if(choice == 4){
		exit(0);
	}
	else{
		cout<<"\n\nWRONG CHOICE!";
		cout<<"\n\nPress any key to choose again...";
		getch();
		goto up;
	}
	return 0;
	
}
