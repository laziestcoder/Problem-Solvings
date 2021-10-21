#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node* link;
} *top = NULL;

void push(int data){
	
	struct node* newNode;
	newNode = malloc(sizeof(newNode));
	
	if( newNode  == NULL ) {
		printf("Stack Overflow.");
		exit(1);
	}

	newNode->data = data;
	newNode->link = NULL;

	newNode->link = top;
	top = newNode;
}

void print(){
	struct node* temp;
	temp = top;
	printf("The stack elements are: ");
	while(temp){
		printf("%d ",temp->data);
		temp = temp->link;
	}
	printf("\n");
}

int pop(){
	struct node* temp;
	temp = top;
	
	if(isEmpty()){ 
		printf("Stack Overflow.");
		exit(1);
	}

	int val = temp->data;
	top = top->link;
	
	free(temp);
	temp = NULL;
	
	return val;

}

int peek() {
	if(isEmpty()){
		printf("Stack underflow.");
		exit(1);
	}

	return top->data;
}

bool isEmpty(){
	return top == NULL;
}

int main () {

	int choice, data;
	while(1) {

		pritf("1. Push\n2. Pop\n3. Print the top element\n4. Print all the elements of the stack\n5. Quit\nPlease enter your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Enter the element to be pushed: ");
				scanf("%d", &data);
				push(data);
				break;
			case 2: 
				data = pop();
				pritf("Deleted element is %d\n", data);
				break;
			case 3: 
				printf("The topmost element of the stack is %d\n", peek());	
			case 4:	
				print(); 
				break; 	
			case 5: 
				exit(1);
			default: 
				printf("Wrong Choice\n");
		}	

	}


	return 0;
}
