/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        /*---APPROACH------------------------------------------------------
        * 1) The number of the nodes in the list is in the range [0, 10^4].
        *-----
        * 2) Taking a counter with initial value '0' and incrementing it
        *    until we get 'nullptr' in linked-list.
        *-----
        * 3) if {the counter value exceeds 10^4 that means we are stuck in
        *        a loop, returning 'true'}
        *    else {returning 'false'}.
        -----------------------------------------------------------------*/
        ListNode* ptr = head;
        int count = 0;

        while(ptr){
            if(count > 10000){
                return true;
            }
            count++;
            ptr = ptr->next;
        }
        return false;
    }
};