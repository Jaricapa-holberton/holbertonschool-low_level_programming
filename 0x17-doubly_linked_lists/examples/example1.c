#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
	struct node* prev;
};
struct node* head; // global variable - pointer to head node
struct node* CreateNewNode(int x)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = x;
	newnode->prev = NULL;
	newnode->next = NULL;
	return (&*newnode);
}
void InsertatHead(int x)
{
	struct node* newnode = CreateNewNode(x);
	if (head == NULL)
	{
		head = newnode;
		return;
	}
}
void Print()
{
	struct node* temp = head;
	printf("Forward: ");
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void ReversePrint()
{
	struct node* temp = head;
	if(temp == NULL)
	{
		return; //empty list, exit
	}
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	printf("Reverse: ");
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("\n");
}
int main(void)
{
	head = NULL; //the list beging empty
	InsertatHead(5);
	Print();
	ReversePrint();
}
