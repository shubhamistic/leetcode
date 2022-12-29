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
    bool helper(ListNode* ptr1, ListNode** ptr2){
        if(ptr1->next == nullptr){
            return (ptr1->val == (*ptr2)->val);
        }
        return helper(ptr1->next, ptr2) && (ptr1->val == (*ptr2 = (*ptr2)->next)->val);
    }

    // main-function
    bool isPalindrome(ListNode* head) {
        return helper(head, &head);
    }
};