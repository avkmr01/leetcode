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

        while(i<slen || j<plen){
            // possibility of p being bigger than s
            if(i == slen){
                cout<<endl;
                cout<<p[j]<<" ("<<j<<") "<<"plen = "<<plen<<endl;
                j++;
                cout<<p[j]<<" hello"<<endl;
                if(j == plen){
                    cout<<"null crossing 2";
                    return true;
                } else if (p[j]!='*'){
                    cout<<"null crossing";
                    return false;
                } 
            } else {
                // for * case take input string: s = aabbcc , p=a*b*c*
                // for . case take input string: s = abcde, p=ab.d.
                // for .* case take input string: s = abcdeffgg, p=a..*f*g.
                if(s[i] == p[j] || p[j] == '.'){
                    sum += 1;
                    cout<<s[i]<<sum;
                } else if(j<plen && s[i] == p[j+2]){
                    sum += 1;
                    cout<<s[i]<<sum;
                    j = j+2;
                }
                if (p[j+1] == '*'){
                    int temp = 0;
                    for(int k=i+1; k<slen; k++){
                        if(isalpha(p[j])){
                            if(s[k] == p[j]){
                                temp = temp+1;
                            } else {
                                break;
                            }
                        } else {
                            if(s[k] != p[j+2]){
                                temp = temp+1;
                            } else {
                                break;
                            }
                        }
                    }
                    j=j+3;
                    i=i+temp;
                    sum=sum+temp;
                } else {
                    j++;
                }
                i++;
            }
        }
        return sum/slen;

    }
};