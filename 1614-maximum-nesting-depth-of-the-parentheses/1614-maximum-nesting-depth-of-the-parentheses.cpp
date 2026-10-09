class Solution {
public:
    int maxDepth(string s) {
        int depth=0,open=0,close=0;
        for(char c:s){
            if(c=='('){
                open++;
            }else if(c==')'){
                open--;
            }else{continue;}
            depth=max(depth,open);
        }
        return depth;
    }
};