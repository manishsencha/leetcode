class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a = coordinates[0] - 'a' + 1, b = coordinates[1] - '0';
        if(a % 2 == 0) {
            if(b &1) return true;
            return false;
        }
        if(b & 1) return false;
        return true;
        
    }
};