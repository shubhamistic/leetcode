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

    void recursivePreorderTraversal(TreeNode* t, vector<int>& arr){
        if(t){
            arr.push_back(t->val);
            recursivePreorderTraversal(t->left, arr);
            recursivePreorderTraversal(t->right, arr);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        recursivePreorderTraversal(root, arr);

        return arr;
    }
};