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
    // helper-functiom
    void inorder(TreeNode* t, vector<int>& arr){
        if(t){
            inorder(t->left, arr);
            arr.push_back(t->val);
            inorder(t->right, arr);
        }
    }

    // main-function
    int getMinimumDifference(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);

        int minCount = INT_MAX;
        for(int i=1 ; i < arr.size() ; i++){
            if((arr[i] - arr[i-1]) < minCount){
                minCount = arr[i] - arr[i-1];
            }
        }
        return minCount;
    }
};