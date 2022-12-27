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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode* ptr = head;
        while(ptr->next){
            if(ptr->next->val == val){
                ListNode* temp = ptr->next;
                ptr->next = ptr->next->next;
                delete temp;
                continue;
            }
            ptr = ptr->next;
        }
        if(head->val == val){
            head = head->next;
        }
        return head;
    }
};