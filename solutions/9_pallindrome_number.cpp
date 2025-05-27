class Solution {
public:
    bool isPalindrome(int x) {
        // it can be noticed that to compare a negative number you need to make it into string
        string s = to_string(x);
        int slen = s.length();
    
        // checking only the half the sentence 
        for (int i = 0; i < slen/2; i++) {
            if(s[i] != s[slen-1-i]){
                return false;
            }
        }
        return true;
    }
};