#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

typedef struct node node;

int main(){
	int value;
	node *head, *ptr;
	head = ptr = NULL;
	
	while(1){
		scanf("%d", &value);
		if(value == -1){
			break;
		}
		
		else if(head == NULL){
			ptr = (node *)malloc(sizeof(node));
			ptr -> data = value;
			ptr -> next = NULL;
			head = ptr;
		}
			
		else{
			head = (node *)malloc(sizeof(node));
			head -> data = value;
			head -> next = ptr;
			ptr = head;
			}
	}
	
	ptr = head;
	while(ptr != NULL){
		printf("%d ", ptr -> data);
		ptr = ptr -> next;
	}
	
	return 0;
}
