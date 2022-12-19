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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        ListNode* temp_ptr = new ListNode();
        ListNode* head = temp_ptr;

        while(ptr1 || ptr2){
            if(ptr1 && ptr2){
                if(ptr1->val < ptr2->val){
                    ListNode* temp = new ListNode(ptr1->val);
                    temp_ptr->next = temp;
                    ptr1 = ptr1->next;
                }
                else{
                    ListNode* temp = new ListNode(ptr2->val);
                    temp_ptr->next = temp;
                    ptr2 = ptr2->next;
                }
                temp_ptr = temp_ptr->next;
            }
            else if(ptr1){
                temp_ptr->next = ptr1;
                break;
            }
            else{
                temp_ptr->next = ptr2;
                break;
            }
        }
        return head->next;
    }
};