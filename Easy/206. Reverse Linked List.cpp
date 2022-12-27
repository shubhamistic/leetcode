/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* helper(ListNode* ptr, ListNode** newHead) {
        if(ptr->next == nullptr){
            *newHead = ptr;
            return ptr;
        }
        ListNode* node = helper(ptr->next, newHead);
        node->next = ptr;
        ptr->next = nullptr;
        return ptr;
    }

    // main-function
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode* newHead;
        helper(head, &newHead);
        return newHead;
    }
};