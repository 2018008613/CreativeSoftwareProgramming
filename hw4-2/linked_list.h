#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__
struct Item {
	char* Name;
	char* Age;
	char* ID;
	char** Subjects;
	struct Item* Next;
};
struct Item* create_item(char* tg);
struct Item* find_end_of_list(struct Item* linked_list);
void insert_item(struct Item *linked_list, struct Item *item);
#endif //__LINKED_LIST_H__
