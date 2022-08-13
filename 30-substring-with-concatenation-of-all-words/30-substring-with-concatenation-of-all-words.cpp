class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int wq = words.size();
        int wl = words[0].size();
        int target = wq * wl;
        unordered_map<string, int> mp;
        
        vector<int> ans;
        if(s.size() < target) {
            return ans;
        }
        
        for(int i = 0; i <= s.size() - target; i++) {
            unordered_map<string, int> mp;
            for(int j=0; j < wq; j++) {
                mp[words[j]]++; 
            }
            int k;
            for(k=0; k < wq; k++) {
                string s1 = s.substr(i + k * wl, wl);
                if(mp.count(s1) == 0)
                    break;
                else if(mp[s1] != 0)
                    mp[s1]--;
                else
                    break;       
            }
            if(k == wq) {
                ans.push_back(i);
            }    
   
        }
        return ans;
    }
};