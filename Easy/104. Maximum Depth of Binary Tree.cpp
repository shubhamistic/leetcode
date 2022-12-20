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

    int heightOfTree(TreeNode* t) {
        if(t == nullptr){
            return 0;
        }
        int left_height = heightOfTree(t->left);
        int right_height = heightOfTree(t->right);
        if(left_height > right_height){
            return left_height + 1;
        }
        else{
            return right_height + 1;
        }
    }

    // main-function
    int maxDepth(TreeNode* root) {
        return heightOfTree(root);
    }
};