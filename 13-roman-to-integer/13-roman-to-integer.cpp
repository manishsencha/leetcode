class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int n = s.length(), res = 0;
         for(int i = 0; i < n; ++i){
            if(i >= 1 && mp[s[i-1]] < mp[s[i]]){
                res += (mp[s[i]] - (2*mp[s[i-1]]));   
                continue;
            }
            res += mp[s[i]];
        }
        return res;
    }
};