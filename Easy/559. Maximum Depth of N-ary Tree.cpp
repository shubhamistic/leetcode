/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int helper(Node* t){
        if(t == nullptr){
            return 0;
        }
        int max = 0;
        for(int i=0 ; i < (t->children).size() ; i++){
            int height = helper((t->children)[i]);
            if(height > max){
                max = height;
            }
        }
        return max+1;
    }

    // main-function
    int maxDepth(Node* root) {
        return helper(root);
    }
};