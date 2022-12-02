class Solution {
public:
    string addBinary(string a, string b) {
        int a_index = a.length()-1;
        int b_index = b.length()-1;
        char c[10001];
        int c_index = 0;
        int carry = 0;

        while((a_index >= 0) && (b_index >= 0)){
            if(     (a[a_index] == '0') && (b[b_index] == '0') && (carry == 0)){
                c[c_index++] = '0';
                carry = 0;
            }
            else if((a[a_index] == '0') && (b[b_index] == '0') && (carry == 1)){
                c[c_index++] = '1';
                carry = 0;
            }
            else if((a[a_index] == '0') && (b[b_index] == '1') && (carry == 0)){
                c[c_index++] = '1';
                carry = 0;
            }
            else if((a[a_index] == '0') && (b[b_index] == '1') && (carry == 1)){
                c[c_index++] = '0';
                carry = 1;
            }
            else if((a[a_index] == '1') && (b[b_index] == '0') && (carry == 0)){
                c[c_index++] = '1';
                carry = 0;
            }
            else if((a[a_index] == '1') && (b[b_index] == '0') && (carry == 1)){
                c[c_index++] = '0';
                carry = 1;
            }
            else if((a[a_index] == '1') && (b[b_index] == '1') && (carry == 0)){
                c[c_index++] = '0';
                carry = 1;
            }
            else if((a[a_index] == '1') && (b[b_index] == '1') && (carry == 1)){
                c[c_index++] = '1';
                carry = 1;
            }
            a_index--;
            b_index--;
        }

        //if some elements left in string 'a' or string 'b'
        if(a_index > b_index){
            while(a_index > b_index){
                if((a[a_index] == '0') && (carry == 0)){
                    c[c_index++] = '0';
                    carry = 0;
                }
                else if((a[a_index] == '0') && (carry == 1)){
                    c[c_index++] = '1';
                    carry = 0;
                }
                else if((a[a_index] == '1') && (carry == 0)){
                    c[c_index++] = '1';
                    carry = 0;
                }
                else if((a[a_index] == '1') && (carry == 1)){
                    c[c_index++] = '0';
                    carry = 1;
                }
                a_index--;
            }
        }
        else{
            while(b_index > a_index){
                if((b[b_index] == '0') && (carry == 0)){
                    c[c_index++] = '0';
                    carry = 0;
                }
                else if((b[b_index] == '0') && (carry == 1)){
                    c[c_index++] = '1';
                    carry = 0;
                }
                else if((b[b_index] == '1') && (carry == 0)){
                    c[c_index++] = '1';
                    carry = 0;
                }
                else if((b[b_index] == '1') && (carry == 1)){
                    c[c_index++] = '0';
                    carry = 1;
                }
                b_index--;
            }
        }
        if(carry == 1){
            c[c_index++] = '1';
        }
        c[c_index] = '\0';

        for(int i=0 ; i<(c_index/2) ; i++){
            char temp = c[i];
            c[i] = c[c_index-i-1];
            c[c_index-i-1] = temp;
        }
        return c;
    }
};