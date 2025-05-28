class Solution {
public:
    bool isMatch(string s, string p) {
        int slen = s.size(), plen = p.size();
        vector<vector<bool>> dp(slen + 1, vector<bool>(plen + 1, false));
        dp[0][0] = true;

        // Handle patterns like a*, a*b*, a*b*c* at the beginning
        for (int j = 1; j <= plen; ++j) {
            if (p[j - 1] == '*' && dp[0][j - 2]) {
                dp[0][j] = true;
            }
        }

        for (int i = 1; i <= slen; ++i) {
            for (int j = 1; j <= plen; ++j) {
                if (p[j - 1] == '.' || p[j - 1] == s[i - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else if (p[j - 1] == '*') {
                    dp[i][j] = dp[i][j - 2]; // zero occurrence
                    if (p[j - 2] == '.' || p[j - 2] == s[i - 1]) {
                        dp[i][j] = dp[i][j] || dp[i - 1][j]; // one or more occurrences
                    }
                }
            }
        }
        return dp[slen][plen];
    }
};
