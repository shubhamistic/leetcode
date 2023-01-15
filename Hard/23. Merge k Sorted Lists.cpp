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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0){
            return nullptr;
        }

        // we have to return this 'head' variable.
        ListNode* head = lists[0];
        for(int i=1 ; i < lists.size() ; i++){
            ListNode* a = lists[i-1];
            ListNode* b = lists[i];
            ListNode* c = new ListNode();
            ListNode* d = c;
            while(a && b){
                if(a->val < b->val){
                    c->next = a;
                    a = a->next;
                }
                else{
                    c->next = b;
                    b = b->next;
                }
                c = c->next;
            }
            if(a){
                c->next = a;
            }
            else if(b){
                c->next = b;
            }
            lists[i] = d->next;
            head = lists[i];
            delete d;
        }
        return head;
    }
};