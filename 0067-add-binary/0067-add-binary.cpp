class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int alen=a.length();
        int blen=b.length();
        int bitslen=(alen>blen)?alen:blen;
        while(a.length()<bitslen){
            a="0"+a;
        }
        while(b.length()<bitslen){
            b="0"+b;
        }
        string res="";
        for(int i=bitslen-1;i>=0;i--){
            int sum=(a[i]-'0')+(b[i]-'0')+carry;
            res+=sum%2+'0';
            carry=sum/2;
        }
        if(carry){
            res=res+"1";
        }
        reverse(res.begin(),res.end());
        return res;
    }
};