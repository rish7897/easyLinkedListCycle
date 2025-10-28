#include<iostream>
using namespace std;

// EXPLANATION

// Floyd’s Cycle-Finding Algorithm (fast slow approach / 2 pointers / "tortoise and the hare algorithm")

// Approach: This is the fastest method and has been described below:

// Traverse linked list using two pointers.

// Move one pointer(slow_p) by one and another pointer(fast_p) by two.

// If these pointers meet at the same node then there is a loop. If pointers do not meet then linked list doesn’t have a loop.


// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast != NULL && fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}