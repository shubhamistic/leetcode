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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // calculating the length of the linked-list
        int len = 0;
        ListNode* ptr = head;
        while(ptr){
            len++;
            ptr = ptr->next;
        }

        // traveling to the (len - n -1)th node
        // delete its next node which is nth node from the last
        ptr = head;
        for(int i=1 ; i < len-n ; i++){
            ptr = ptr->next;
        }
        if(ptr == head && n == len){
            ListNode* temp = ptr->next;
            delete ptr;
            return temp;
        }
        ListNode* temp = ptr->next;
        if(ptr->next->next){
            ptr->next = ptr->next->next;
        }
        else{
            ptr->next = nullptr;
        }
        delete temp;

        return head;
    }
};