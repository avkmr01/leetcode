class Solution {
public:
    bool isMatch(string s, string p) {
        // solving '*' problem first and then including '.' problem.
        // lastly check compatibility with combining both

        int slen = s.length();
        int plen = p.length();
        int sum = 0;
        bool flag = true;
        char alpha = s[0];
        int i=0,j=0;

        while(i<slen){
            // for * case take input string: s = aabbcc , p=a*b*c*
            // for . case take input string: s = abcde, p=ab.d.
                if(s[i] == p[j] || p[j] == '.'){
                    sum += 1;
                    cout<<s[i]<<sum;
                } else if(j<plen && s[i] == p[j+2]){
                    sum += 1;
                    cout<<s[i]<<sum;
                    j = j+2;
                }
                if (isalpha(p[j+1]) || p[j+1] == '.'){
                    j++;
                }
                i++;
        }
        return sum/slen;

    }
};