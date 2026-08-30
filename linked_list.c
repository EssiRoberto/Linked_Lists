#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main(void) {
    struct Node *a = malloc(sizeof(struct Node));
    struct Node *b = malloc(sizeof(struct Node));
    if (head && second) {
        head->data = 10;
	head->next = second;
	second->data = 20;
	second->next = NULL;
	printf("List: %d, List: %d\n", head->data, head->data, head->next->data);
	free(second);
	free(head);
    }
    return 0;
}
