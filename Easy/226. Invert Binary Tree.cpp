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
    void helper(TreeNode* t){
        if(t){
            TreeNode* temp = t->left;
            t->left = t->right;
            t->right = temp;
            helper(t->left);
            helper(t->right);
        }
    }

    // main-function
    TreeNode* invertTree(TreeNode* root) {
        /*---APPROACH------------------------------------------------
        * 1) Traversing to each node of the tree from top to bottom.
        * 2) Swapping their left and right children.
        -----------------------------------------------------------*/
        helper(root);
        return root;
    }
};