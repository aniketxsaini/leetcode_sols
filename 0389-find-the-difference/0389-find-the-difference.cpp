class Solution {
public:
    char findTheDifference(string s, string t) {
        int a=0;
        for(int i=0;i<s.length();i++){
            a=a^(s[i]-'a'+1);
        }
        for(int i=0;i<t.length();i++){
            a=a^(t[i]-'a'+1);
        }
        
        return 'a'+a-1;

    }
};