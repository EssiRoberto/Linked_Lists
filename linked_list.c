#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main(void) {
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));

    if (head != NULL && second != NULL) {
        head->data = 10;
        head->next = second;
        second->data = 20;
        second->next = NULL;

        printf("First node: %d\n", head->data);
        printf("Second node: %d\n", second->data);

        free(second);
        free(head);
    }

    return 0;
}
