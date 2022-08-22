/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int a = 0, b = n;
        if(guess(b) == 0) return b;
        while(a <= b) {
            int mid = b - (b - a) /2;
            if(guess(mid) == 0) return mid;
            else if(guess(mid) == -1){
                b = mid;
            }
            else a = mid;
        }
        return -1;
    }
};