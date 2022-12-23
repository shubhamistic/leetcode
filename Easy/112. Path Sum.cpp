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
    void helper(TreeNode* t, int targetSum, int sum, int* finalAns){
        if(t == nullptr){
            return;
        }

        if((t->left == nullptr) && (t->right == nullptr)){
            if(targetSum == sum + t->val){
                *finalAns = 1;
            }
        }

        if(t->left != nullptr){
            helper(t->left, targetSum, sum + t->val, finalAns);
        }
        if(t->right != nullptr){
            helper(t->right, targetSum, sum + t->val, finalAns);
        }
    }

    // main-function
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        int finalAns = 0;
        helper(root, targetSum, sum, &finalAns);

        if(finalAns){
            return true;
        }
        return false;
    }
};