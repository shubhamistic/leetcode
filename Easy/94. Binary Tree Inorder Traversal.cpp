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
    void recursiveInorderTraversal(TreeNode* t, vector<int>& arr){
        if(t){
            recursiveInorderTraversal(t->left, arr);
            arr.push_back(t->val);
            recursiveInorderTraversal(t->right, arr);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        //calling an external recursive function.
        recursiveInorderTraversal(root, arr);

        return arr;
    }
};