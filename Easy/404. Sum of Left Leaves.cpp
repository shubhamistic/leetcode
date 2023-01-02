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
    void helper(TreeNode* t, int* sum){
        if(t == nullptr){
            return;
        }
        helper(t->left, sum);
        helper(t->right, sum);
        if(t->left){
            if((t->left->left == nullptr) && (t->left->right == nullptr)){
                *sum = *sum + (t->left->val);
            }
        }
    }

    // main-function
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        helper(root, &sum);
        return sum;
    }
};