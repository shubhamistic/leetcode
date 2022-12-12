/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool checkEqual(TreeNode* m, TreeNode* n){
        if((m == nullptr) && (n == nullptr)){
            return true;
        }
        else if((m == nullptr) || (n == nullptr)){
            return false;
        }
        else if(m->val == n->val){
            return true;
        }
        return false;
    }

    void traverse(TreeNode* t1, TreeNode* t2, vector<bool>& arr) {
        if(t1 && t2){
            arr.push_back(checkEqual(t1, t2));
            traverse(t1->left, t2->left, arr);
            traverse(t1->right, t2->right, arr);
        }
        arr.push_back(checkEqual(t1, t2));
    }

    // main-function
    bool isSameTree(TreeNode* p, TreeNode* q) {
        /*
        * 1) traversing both the trees and comparing their elements & storing
        *    the result after comparison in a boolean array of 'true' & 'false'.
        *
        * 2) if{ any 'false' is found in the array than returning 'false'}
        * 3) else{ if no 'false' is there in the whole array than returning 'true'}
        */

        vector<bool> arr;
        traverse(p, q, arr);

        int arr_size = arr.size();
        for(int i=0 ; i<arr_size ; i++){
            if(arr[i] == false){
                return false;
            }
        }
        return true;
    }
};