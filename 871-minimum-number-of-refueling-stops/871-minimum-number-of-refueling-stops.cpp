class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int position = 0;
        int ans = 0;
        priority_queue<pair<int, int> > pq;
        pq.push({startFuel, 0});
        int i=0;
        while (position < target && !pq.empty()){
            pair<int, int> p = pq.top();pq.pop();
            position += p.first;
            ans += 1;
            while(i < stations.size() && stations[i][0] <= position){
                pq.push({stations[i][1], stations[i][0]});
                ++i;
            }
        }
        if (position >= target){
            return ans - 1;
        }else{
            return -1;
        }
    }
};