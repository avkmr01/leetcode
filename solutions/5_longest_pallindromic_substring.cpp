class Solution {
    int checkPalindrome(string substring) {

        int len = substring.length();
        int mid = len / 2;

        string firstHalf = substring.substr(0, mid);
        string secondHalf = substring.substr(len - mid);

        reverse(secondHalf.begin(), secondHalf.end());

        return firstHalf == secondHalf;
    }

public:
    string longestPalindrome(string s) {
        int slength = s.length();
        if (slength <= 1)
            return s;

        string palString = "";

        for (int i = 0; i < slength; ++i) {
            for (int j = slength - 1; j > i; --j) {
                // Skip if characters don't match
                if (s[i] != s[j])
                    continue;

                // Only check substrings longer than current longest
                if ((j - i + 1) <= palString.length())
                    break;

                string sub = s.substr(i, j - i + 1);
                if (checkPalindrome(sub)) {
                    palString = sub;
                    break; // No need to check smaller substrings starting from i
                }
            }
        }

        // If no palindrome found, return the first character
        return palString.empty() ? string(1, s[0]) : palString;
    }
};