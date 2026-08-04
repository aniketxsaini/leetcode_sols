class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0,n=s.size(),high=0,res=0;
        map<char,int> mp;
        for(high=0;high<n;high++){
               
               mp[s[high]]++;
               
               while(mp[s[high]]>1){
               
                mp[s[low]]--;

                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                    
                }
                low++;
                }
                res=max(res,high-low+1);
            }
        return res;
    }
};