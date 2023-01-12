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
    // function to calculate the sum of the sub-tree
    void calcSum(TreeNode* t, int* sumOfChildNodes){
        if(t){
            calcSum(t->left, sumOfChildNodes);
            calcSum(t->right, sumOfChildNodes);
            *sumOfChildNodes += t->val;
        }
    }

    // function to traverse on each node
    void helper(TreeNode* t, int* sum){
        if(t){
            helper(t->left, sum);
            helper(t->right, sum);
            int leftSum = 0;
            calcSum(t->left, &leftSum);
            int rightSum = 0;
            calcSum(t->right, &rightSum);
            if(leftSum - rightSum < 0){
                *sum += rightSum - leftSum;
            }
            else{
                *sum += leftSum - rightSum;
            }
        }
    }

    // main-function
    int findTilt(TreeNode* root) {
        int sum = 0;
        helper(root, &sum);
        return sum;
    }
};