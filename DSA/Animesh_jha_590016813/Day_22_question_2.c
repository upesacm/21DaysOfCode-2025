#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

int countOccurrences(struct ListNode* head, int key) {
    int count = 0;
    struct ListNode* current = head;
    while (current != NULL) {
        if (current->val == key) {
            count++;
        }
        current = current->next;
    }
    return count;
}

int main() {

    struct ListNode* head = malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = malloc(sizeof(struct ListNode));
    head->next->val = 2;
    head->next->next = malloc(sizeof(struct ListNode));
    head->next->next->val = 1;
    head->next->next->next = malloc(sizeof(struct ListNode));
    head->next->next->next->val = 2;
    head->next->next->next->next = malloc(sizeof(struct ListNode));
    head->next->next->next->next->val = 1;
    head->next->next->next->next->next = malloc(sizeof(struct ListNode));
    head->next->next->next->next->next->val = 3;
    head->next->next->next->next->next->next = malloc(sizeof(struct ListNode));
    head->next->next->next->next->next->next->val = 1;
    head->next->next->next->next->next->next->next = NULL;

    int key = 1;
    printf("Occurrences of %d: %d\n", key, countOccurrences(head, key));

    return 0;
}
