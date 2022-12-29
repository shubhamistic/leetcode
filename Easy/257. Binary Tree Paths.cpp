// using string libraries to convert number into string in c++.
#include <sstream>
#include <string>
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

class Array{
public:
    int arr[100];
    int front;
    int rear;

    Array(){
        front = -1;
        rear = -1;
    }
    void enqueue(int n){
        arr[++rear] = n;
    }
    void dequeue(){
        ++front;
    }
    void pop(){
        --rear;
    }
    bool isEmpty(){
        if(rear < front){
            return true;
        }
        return false;
    }
};

class Solution {
public:

    // method to convert number into string like "1->2->5".
    string getFinalString(Array* array){
        string str;
        for(int i=(array->front)+1 ; i<=array->rear ; i++){
            ostringstream str1;
            str1 << array->arr[i];
            str = str + str1.str() + "->";
        }
        str.resize(str.length() - 2); // for removing extra "->" in the end of str.
        return str;
    }

    void helper(TreeNode* t, TreeNode* root,Array* array, vector<string>& strArr){
        if(t == nullptr){
            return;
        }
        array->enqueue(t->val);
        helper(t->left, root, array, strArr);
        helper(t->right, root, array, strArr);
        if((t->left == nullptr) && (t->right == nullptr)){
            strArr.push_back(getFinalString(array));
        }
        array->pop();
    }

    // main-function
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> strArr;
        if(root == nullptr){
            return strArr;
        }
        Array* array = new Array();
        helper(root, root, array, strArr);
        return strArr;
    }
};