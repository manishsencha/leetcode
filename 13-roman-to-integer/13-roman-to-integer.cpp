class Solution {
public:
    int romanToInt(string s) {
        vector<int> v(26);
        v['I' - 'A'] =  1;
        v['V' - 'A'] =  5;
        v['X' - 'A'] =  10;
        v['L' - 'A'] =  50;
        v['C' - 'A'] =  100;
        v['D' - 'A'] =  500;
        v['M' - 'A'] =  1000;
        
        int n = s.length(), res = 0;
         for(int i = 0; i < n; ++i){
            if(i >= 1 && v[s[i-1] - 'A'] < v[s[i] - 'A']){
                res += (v[s[i] - 'A'] - (2*v[s[i-1] - 'A']));   
                continue;
            }
            res += v[s[i] - 'A'];
        }
        return res;
    }
};