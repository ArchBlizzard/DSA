#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    // Function to reverse a linked list.
    struct Node* reverseList(struct Node* head) {
        struct Node* current = head;
        struct Node* next;
        while (current->next != NULL) {
            next = current->next;
            current->next = next->next;
            next->next =head;
            head = next;
        }
        return head;
        // return head of reversed list
    }
};
