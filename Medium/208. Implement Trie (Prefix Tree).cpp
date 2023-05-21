// helper class
class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for(int i=0 ; i < 26 ; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

// main class
class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){
        // base case
        if(word.size() == 0){
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode* child;

        // present
        if (root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            // absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // recursion
        insertUtil(child, word.substr(1));
    }

    void insert(string word) {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word) {
        // base case
        if(word.size() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'a';
        TrieNode* child;

        // present
        if (root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            // absent
            return false;
        }

        // recursion
        return searchUtil(child, word.substr(1));
    }

    bool search(string word) {
        return searchUtil(root, word);
    }

    bool startsWithUtil(TrieNode* root, string prefix) {
        // base case
        if(prefix.size() == 0){
            return true;
        }

        int index = prefix[0] - 'a';
        TrieNode* child;

        // present
        if (root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            // absent
            return false;
        }

        // recursion
        return startsWithUtil(child, prefix.substr(1));
    }

    bool startsWith(string prefix) {
        return startsWithUtil(root, prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */