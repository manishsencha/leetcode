class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()) return false;
        int n = s.size();
        vector<int> v;
        for(int i = 0; i < n; ++i) {
           if(s[i] != goal[i]) {
               v.push_back(i);
            }
        }
        if(v.size() == 2) {
            if(s[v[0]] == goal[v[1]] && s[v[1]] == goal[v[0]]) return true;
            return false;
        }
        else if(v.size() == 0) {
            set<char> st;
            for(auto c : s) st.insert(c);
            if(st.size()  < s.size()) return true;
            return false;
        }
         else {
            return false;
        }
        
    }
};