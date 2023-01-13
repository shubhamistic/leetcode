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
    // helper-function
    void postorder(Node* t, vector<int>& arr){
        if(t){
            for(int i=0 ; i < (t->children).size() ; i++){
                postorder((t->children)[i], arr);
            }
        }
        arr.push_back(t->val);
    }

    // main-function
    vector<int> postorder(Node* root) {
        if(root == nullptr) {return {};}
        vector<int> arr;
        postorder(root, arr);
        return arr;
    }
};