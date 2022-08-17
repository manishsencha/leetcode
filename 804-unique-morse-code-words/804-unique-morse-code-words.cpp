class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> st;
        int n = words.size();
        vector<string> v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i = 0; i < n; ++i) {
            string s = "";
            for(char c : words[i]) {
                s += v[c - 'a']; 
            }
            st.insert(s);
        }
        return st.size();
    }
};