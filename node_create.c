#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main(void) {
    struct Node *node = malloc(sizeof(struct Node));

    if (node != NULL) {
        node->data = 42;
        node->next = NULL;
        printf("Node data: %d\n", node->data);
        free(node);
    }

    return 0;
}
