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
    // helper-function
    void helper(TreeNode* &t1, TreeNode* &t2){
        if(t1 == nullptr || t2 == nullptr){
            if(t1 == nullptr){
                t1 = t2;
                return;
            }
        }
        if(t1 && t2){
            t1->val += t2->val;
            helper(t1->left, t2->left);
            helper(t1->right, t2->right);
        }
    }

    // main-function
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        helper(root1, root2);
        return root1;
    }
};