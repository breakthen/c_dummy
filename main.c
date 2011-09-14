/*
 ============================================================================
 Name        : c_dummy.c
 Author      : breakthen
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main(void) {
	struct ListNode* header, *temp, *current;
	header = init_list(-1);
	current = header;
	int i;
	for(i=0; i<10; i++){
		temp = new_node(i);
		insert_node_previous(current,temp);
		current = temp;
	}

	print(header);
	printf("\nReverse print===========:\n");
	print_reverse(header);
	return EXIT_SUCCESS;
}
