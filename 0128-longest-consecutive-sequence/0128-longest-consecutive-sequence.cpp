class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set<int> s;
        for(auto x:nums){
            s.insert(x);
        }
        int count=1;
        int ans=0;
        for(auto it=s.begin();it!=s.end();++it){
           auto next=std::next(it);
           if(next!=s.end() && *next == *it+1){
            count++;
           }
           else{count=1;}
           ans=max(ans,count);
        }
        return ans;
    }
};