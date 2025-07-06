#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

int findMiddle(struct ListNode* head) {
    struct ListNode *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->val;
}

int main() {
    struct ListNode* head = malloc(sizeof(struct ListNode));
    head->val = 2;
    head->next = malloc(sizeof(struct ListNode));
    head->next->val = 4;
    head->next->next = malloc(sizeof(struct ListNode));
    head->next->next->val = 6;
    head->next->next->next = malloc(sizeof(struct ListNode));
    head->next->next->next->val = 7;
    head->next->next->next->next = malloc(sizeof(struct ListNode));
    head->next->next->next->next->val = 1;
    head->next->next->next->next->next = malloc(sizeof(struct ListNode));
    head->next->next->next->next->next->val = 5;
    head->next->next->next->next->next->next= NULL;

    printf("Middle node: %d\n", findMiddle(head));

    return 0;
}
