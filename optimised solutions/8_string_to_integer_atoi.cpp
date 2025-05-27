class Solution {
public:
    int myAtoi(string s) {
        // Implementing constraint one by one
        long output = 0;
        int sign = 1;
        bool flag = true;

        for(int i=0; i<s.length(); i++){
            // starting with checking whether the character is alphabet or dot 
            // if true then return the output
            if (isalpha(s[i]) || s[i]=='.'){
                return sign*output;
            } else {
                // checking whether it is a digit. It will segregate " " out of output
                if(isdigit(s[i])){
                    // increasing the output by 10 to add the new found number
                    flag = false;
                    output = output*10 + s[i] - '0';
                    if (output > INT_MAX || output < INT_MIN) {
                        if(sign == -1){
                            return INT_MIN;
                        }
                        else {
                            return INT_MAX;
                        }
                    }
                } 
                // Below if-else conditions handle different signs and spaces using flag variable
                else if(s[i] == '-'){
                    if(output == 0 && flag){
                        sign = -1; 
                    } else if (!flag){
                        return sign*output;
                    }
                    flag = false;
                } else if(s[i] == '+') {
                    if(!flag){
                        return sign*output;
                    }
                    flag = false;
                } else if(s[i] == ' ' && !flag){
                    return sign*output;
                }
            }
        }
        return sign*output;
    }
};