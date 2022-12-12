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

    void traverseRightToLeft(TreeNode* t, vector<int>& arr) {
        if(t){
            arr.push_back(t->val);
            traverseRightToLeft(t->right, arr);
            traverseRightToLeft(t->left, arr);
        }
        arr.push_back(-101);
    }

    void traverseLeftToRight(TreeNode* t, vector<int>& arr) {
        if(t){
            arr.push_back(t->val);
            traverseLeftToRight(t->left, arr);
            traverseLeftToRight(t->right, arr);
        }
        arr.push_back(-101);
    }

    // main-function
    bool isSymmetric(TreeNode* root) {
        /*---APPROACH-------------------------------------------------
        * 1) traversing the left side of the tree from left to right.
        *    and storing the result in arr1[].
        * 2) traversing the right side of the tree from right to left.
        *    and storing the result in arr2[].
        * 3) comparing if both the arrays are same or not
        *    if YES{ than returning 'true'}
        *    if NO{ than returning 'false'}
        ------------------------------------------------------------*/
        vector<int> arr1;
        vector<int> arr2;

        traverseLeftToRight(root->left, arr1);
        traverseRightToLeft(root->right, arr2);

        int arr_size = arr1.size();
        for(int i=0 ; i<arr_size ; i++){
            if(arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
};