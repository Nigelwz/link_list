#include <stdlib.h>
#include <stdio.h>

typedef struct _NODE{
	int data;
	struct _NODE* next;
}NODE;

NODE* head = NULL;
NODE* current;

void insert(int x)
{
	NODE* tmp = malloc(sizeof(NODE));
	//tmp -> data = x;
	//tmp -> next = head;
	//head = tmp;
	tmp -> data = x;
	tmp -> next = NULL;
	//head = tmp;
	/*if(head)
		tmp -> next = head;
	head = tmp;*/
	if(head)
		tmp -> next = head;
	head = tmp;
}

void print(void)
{
	while(head)
	{
		printf(" %d ",head->data);
		head = head->next;
	}
}

void main(void)
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	//head = current;
	print();
	printf("hello");
}