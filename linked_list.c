#include <stdio.h>
#include "linked_list.h"

struct ListNode* new_node(int data) {
	struct ListNode *current = (struct ListNode*)malloc(sizeof(struct ListNode));
	if (current == NULL) {
		printf("cant allocate memory for new node......");
		exit(1);
	}
	current->data = data;
	current->next = current->previous = current;
	return current;
}

struct ListNode* init_list(int data) {
	return new_node(data);
}

void insert_node_next(struct ListNode *current, struct ListNode *node) {
	current->next->previous = node;
	node->previous = current->previous;
	node->next = current->next;
	current->next = node;
}

void insert_node_previous(struct ListNode *current, struct ListNode *node) {
	current->previous->next = node;
	node->previous = current->previous;
	node->next = current;
	current->previous = node;
}

void delete_node(struct ListNode *node) {
	node->previous->next = node->next;
	node->next->previous = node->previous;
}

struct ListNode* previous_node(struct ListNode *node) {
	return node->previous;
}

struct ListNode* next_node(struct ListNode *node) {
	return node->next;
}

void print_reverse(struct ListNode *header){

	if(header == NULL)
		return;
	if(header->next == header->previous == header){
		printf(" %d \n", header->data);
	}

	struct ListNode *current = header;
	while(current->previous != header){
		printf(" %d \n", current->data);
		current = current->previous;
	}
	printf(" %d", current->data);
}

void print(struct ListNode *header) {
	struct ListNode * current = header;
	while (current->next != header) {
		printf(" %d \n", current->data);
		current = current->next;
	}

	printf(" %d", current->data);
}

