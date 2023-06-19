class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int s = 0, a = 0;
        for(auto &i : gain){
            s += i;
            a = max(s,a);
        }
        return a;
    }
};