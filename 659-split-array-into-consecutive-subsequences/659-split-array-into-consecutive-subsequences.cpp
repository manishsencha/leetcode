class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> f,number;
        for(auto i:nums)f[i]++;
        
        for(auto i:nums)
        {
            if(f[i]>0)
            {
                if(number[i-1]>0)
                {
                    number[i-1]--;
                    number[i]++;
                    f[i]--;
                }
                else if(f[i+1]>0 and f[i+2]>0)
                {
                    f[i+1]--;
                    f[i+2]--;
                    f[i]--;
                    number[i+2]++;
                }
               else return false;
            }
        }
        return true;
    }
};