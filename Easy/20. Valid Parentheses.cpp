class Stack{
    int top = -1;
    char arr[10000];

    public:
        void push(char op){
            arr[++top] = op;
        }

        char pop(){
            if(top == -1){
                return '\0';
            }
            return arr[top--];
        }

        bool isEmptyStack(){
            if(top == -1){
                return true;
            }
            return false;
        }
};

class Solution {
    public:
        bool isValid(string s) {
            Stack s1;
            for(int i = 0 ; i<s.length() ; i++){
                if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                    s1.push(s[i]);
                }
                else{
                    char brac = s1.pop();
                    if(s[i] == ')'){
                        if(brac != '('){
                            return false;
                        }
                    }
                    else if(s[i] == '}'){
                        if(brac != '{'){
                            return false;
                        }
                    }
                    else if(s[i] == ']'){
                        if(brac != '['){
                            return false;
                        }
                    }
                }
            }
            if(s1.isEmptyStack()){
                return true;
            }
            return false;
        }
};