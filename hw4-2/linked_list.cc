#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ** split(char *str, const char *delim) {
	char **string_list = (char **)malloc(10 * sizeof(char*));
	for (int i = 0; i < 10; ++i) {
		string_list[i] = NULL;
	}
	int idx = 0;
	char * token = strtok(str, delim);
	while (token != NULL) {
		string_list[idx] = (char*)malloc(strlen(token) + 1);
		strcpy(string_list[idx], token);
		token = strtok(NULL, delim);
		++idx;
	}
	return string_list;
}
struct Item* create_item(char* tg) {
	Item *a = (Item *)malloc(sizeof(Item));
	a->Name = (char *)malloc(100 * sizeof(char));
	a->Age = (char *)malloc(4 * sizeof(char));
	a->ID = (char *)malloc(11 * sizeof(char));
	a->Subjects = (char **)malloc(10 * sizeof(char*));
	for (int i = 0; i < 10; i++)a->Subjects[i] = (char*)malloc(20 * sizeof(char));
	for (int i = 0; i < 10; i++)a->Subjects[i] = NULL;
	a->Next = NULL;

	char **items = split(tg, ":");
	char **subject = split(items[3], ",");
	strcpy(a->Name, items[0]);
	strcpy(a->Age, items[1]);
	strcpy(a->ID, items[2]);

	a->Subjects = subject;

	return a;
}
struct Item* find_end_of_list(struct Item* linked_list) {
	Item* b = linked_list;
	while (b->Next != NULL)
	{
		b = b->Next;
	}
	return b;
}void insert_item(struct Item *linked_list, struct Item *item) {
	Item* b = item;
	find_end_of_list(linked_list)->Next = b;
}
