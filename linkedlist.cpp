#include<stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
	
}*head=NULL;
void InsertFirst(int val){
	struct node *n1=(struct node *)malloc(sizeof(struct node));
	n1->data =val;
	n1->next=head;
	head=n1;
}
void insertAtLast(int val){
		struct node *n1=(struct node *)malloc(sizeof(struct node));
		n1->data=val;
		n1->next=NULL;
		struct node *temp;
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n1;
		
}
void insertAfter(int aft,int val){
	struct node *n1=(struct node *)malloc(sizeof(struct node));
	n1->data=val;
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		if(temp->data==aft){
			n1->next=temp->next;
			temp->next=n1;
			return;
		}
		else{
			temp=temp->next;
		}
			
			
		}
	}
	

void display(){
	
		struct node *temp;
		temp=head;
		while(temp!=NULL)
		{
			printf("the elements are..");
			printf("%d,",temp->data);
			temp=temp->next;
		}
	}
		void search(int val){
			struct node *temp;
			temp=head;
			while(temp!=NULL){
				if(temp->data==val){
					printf("%d is found",temp->data);
					return;
				}
				temp=temp->next;
				}
				
					printf("element not found in the list");
				
			}
			
			void remov(int val){
				if(head->data==val){
					head=head->next;
					return;
				}
				struct node *temp;
				struct node *prev;
				temp=head->next;
				prev=head;
				while(temp!=NULL){
					if(temp->data==val){
						prev->next=temp->next;
						free(temp);
						return;
						
					}
					else
					prev=temp;
					temp=temp->next;
				}
			}
			
		

int main(){
	InsertFirst(25);
	display();
	printf("\n");
	insertAtLast(50);
	display();
	printf("\n");
	insertAfter(25,26);
	display();
	printf("\n");
	remov(50);
	display();
	search(26);
	
	display();
	return 0;
}
