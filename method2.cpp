#include<iostream>
#include<climits>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


bool hasCycle(ListNode *head) {
    while(head != NULL){
        if(head->val == INT_MAX){
            return true;
        }
        head->val = INT_MAX;
        head = head->next;
    }
    return false;
}