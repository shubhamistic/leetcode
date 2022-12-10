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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }

        ListNode* ptr = head;

        // 'node_ptr' will keep the tract of location
        // where we have to insert the node in the List.
        ListNode* node_ptr = ptr;

        // we will compare each element of List with
        // 'list_val' variable
        int list_val = ptr->val;
        ptr = ptr->next;

        while(ptr != nullptr){
            if(ptr->val != list_val){
                node_ptr->next = ptr;
                list_val = ptr->val;
                node_ptr = ptr;
            }
            ptr = ptr->next;
        }
        node_ptr->next = nullptr;

        return head;
    }
};