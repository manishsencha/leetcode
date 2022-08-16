class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mp;
        int n = s.length();
        for(int i = 0; i < n; ++i) {
            mp[s[i]]++;
        }
        vector<int> v(26, true);
        for(int i = 0; i < n; ++i) {
            if(mp[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};