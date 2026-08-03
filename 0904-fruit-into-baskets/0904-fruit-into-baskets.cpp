class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int low=0,res=0,high=0;
        map<int,int> m;
        for(high=0;high<n;high++){
            m[fruits[high]]++;
            if(m.size()>2){
                m[fruits[low]]--;
                if(m[fruits[low]]==0){
                    m.erase(fruits[low]);
                }
                low++;
            }
            res=max(res,high-low+1);
        }
        return res;
    }
};