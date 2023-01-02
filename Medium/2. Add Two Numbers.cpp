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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* a = l1;
        ListNode* b = l2;
        ListNode* sumList = new ListNode();
        ListNode* c = sumList;

        while(a && b){
            int sum = (a->val) + (b->val) + carry;
            if(sum > 9){
                carry = 1;
                sum = sum - 10;
            }
            else{
                carry = 0;
            }
            ListNode* temp = new ListNode(sum);
            c->next = temp;
            c = c->next;

            a = a->next;
            b = b->next;
        }
        ListNode* d = nullptr;
        if(a) {d = a;}
        else if (b) {d = b;}
        while(d){
            int sum = (d->val) + carry;
            if(sum > 9){
                carry = 1;
                sum = sum - 10;
            }
            else{
                carry = 0;
            }
            ListNode* temp = new ListNode(sum);
            c->next = temp;
            c = c->next;

            d = d->next;
        }
        if(carry == 1){
            ListNode* temp = new ListNode(1);
            c->next = temp;
            c = c->next;
        }
        return (sumList->next);
    }
};