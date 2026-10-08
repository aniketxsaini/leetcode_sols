class Solution {
public:
    int kthGrammar(int n, int k) {
        vector<int> prev = {0};
        for (int i = 1; i < n; i++) {
            vector<int> next = prev;
            vector<int> comp = compliment(prev);

            next.insert(next.end(), comp.begin(), comp.end());

            prev = next;
        }
        return prev[k - 1];
    }

public:
    vector<int> compliment(vector<int> v) {
        for (auto& x : v) {
            x = 1 - x;
        }
        return v;
    }
};