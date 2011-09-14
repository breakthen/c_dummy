/*
 * linked_list.h
 *
 *  Created on: 2011-9-13
 *      Author: breakthen
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

typedef enum{
	T_INT,
	T_FLOAT,
	T_STR
}NodeType;

struct ListNode {
	struct ListNode *next;
	struct ListNode *previous;
	void* data;
	NodeType nodeType;
};

struct ListNode* new_node(void *data, NodeType nodeType);

struct ListNode* init_list();

void insert_node_next(struct ListNode *current, struct ListNode *node);

void insert_node_previous(struct ListNode *current, struct ListNode *node);

void delete_node(struct ListNode *node);

struct ListNode* previous_node(struct ListNode *node);

struct ListNode* next_node(struct ListNode *node);

void print_reverse(struct ListNode *header);

void print(struct ListNode *header);

#endif /* LINKED_LIST_H_ */
