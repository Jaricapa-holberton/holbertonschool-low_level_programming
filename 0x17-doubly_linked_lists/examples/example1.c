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
	newnode_>prev = NULL;
	newnode->next = NULL;
	return (newnode)
}
void InsertatHead(int x)
{
	struct node* newnode = CreateNewNode(x)
	if (head == NULL)
	{
		head = newnode;
		return;
	}
}
int main(void)
{
	
}
