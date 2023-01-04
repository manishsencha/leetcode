class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int, int> mp;
        for(auto i : tasks) {
            mp[i]++;
        }
        int res = 0;
        for(auto i : mp) {
            if(i.second == 1) return -1;
            // cout << i.first << " " << i.second << endl;
            if(i.second == 2)  res += 1;
            else res += ceil(i.second/3.0);
        }
        return res;
    }
};