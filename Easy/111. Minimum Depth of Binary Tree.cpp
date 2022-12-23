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
    void helper(TreeNode* t, int* min, int curMin) {
        if(t == nullptr){
            return;
        }

        if((t->left == nullptr) && (t->right == nullptr)){
            if(curMin < *min){
                *min = curMin + 1;
            }
        }

        if(t->left != nullptr){
            helper(t->left, min, curMin+1);
        }
        if(t->right != nullptr){
            helper(t->right, min, curMin+1);
        }
    }

    // main-function
    int minDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }

        int min = INT_MAX;
        int curMin = 0;
        helper(root, &min, curMin);
        return min;
    }
};