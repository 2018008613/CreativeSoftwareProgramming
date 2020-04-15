#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"

int main(void){
	FILE* fp = fopen("input.txt", "r");
	char **target;
	target = (char**)malloc(100 * sizeof(char*));
	for (int i = 0; i < 100; i++)target[i] = (char*)malloc(100 * sizeof(char));

	int num = 0;
	while (1)
	{
		if (fgets(target[num], 100, fp) == NULL)break;
		num++;
	}

	fclose(fp);
	Item* linked_list;
	linked_list = create_item(target[0]);


	for (int j = 1; j < num; j++) {
		insert_item(linked_list, create_item(target[j]));
	}

	Item* p = linked_list;

	while (p != NULL) {
		if (p->ID[0] == '2'&&p->ID[1] == '0'&&p->ID[2] == '1'&&p->ID[3] == '3') {
			printf("%s: %s: ", p->Name, p->ID);
			int i;
			for (i = 0; i < 10 && p->Subjects[i + 1] != NULL; i++)
			{
				printf("%s, ", p->Subjects[i]);
			}
			printf("%s", p->Subjects[i]);

		}
		p = p->Next;
	}

	for (int i = 0; i < 100; i++)free(target[i]);
	free(target);
}
