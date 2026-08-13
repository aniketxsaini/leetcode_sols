class Solution {
public:
    bool isPalindrome(int x) {
        //bruteforce
        if(x<0){return false;} 
        vector<long long> v;
        int copy=x;
        while(copy>0){
            v.push_back(copy%10);
            copy/=10;
        }
        long long res=0;
        for(auto x:v){
            res=res*10+x;
        }
        if(res==x){
            return true;
        }
        return false;
    }
};