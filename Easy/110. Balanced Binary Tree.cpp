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

    int heightOf(TreeNode* t) {
        if(t == nullptr){
            return 0;
        }
        int left_height = heightOf(t->left);
        int right_height = heightOf(t->right);
        if(left_height > right_height){
            return left_height + 1;
        }
        else{
            return right_height + 1;
        }
    }

    bool helper(TreeNode* t){
        if(t == nullptr){
            return true;
        }
        if((t->left == nullptr) && (t->right == nullptr)){
            return true;
        }
        bool isLeft = helper(t->left);
        bool isRight = helper(t->right);
        int leftHeight = heightOf(t->left);
        int rightHeight = heightOf(t->right);
        if(((leftHeight - rightHeight) == -1) ||
           ((leftHeight - rightHeight) == 0) ||
           ((leftHeight - rightHeight) == 1))
        {
            return (isLeft && isRight);
        }
        else{
            return false;
        }
    }

    // main-function
    bool isBalanced(TreeNode* root) {
        /*---APPROACH---------------------------------------------------
        * 1) Traversing to each and every node of the tree.
        *-----
        * 2) calculating the height of left subtree and right subtree
        *    for each and every node.
        *-----
        * 3) if (left_subtree_height - right_subtree_height) result
        *       in [-1, 0, 1] than it means the node is balanced.
        *    {returning true}
        *    else
        *    {returning false}
        --------------------------------------------------------------*/
        if(root == nullptr){
            return true;
        }
        return helper(root);
    }
};