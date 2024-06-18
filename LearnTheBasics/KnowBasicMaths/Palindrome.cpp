
class Solution {
public:
    bool isPalindrome(int x) {
        long result = 0;
        int og= x;
        if (x < 0) {
            return false;
        }
        while (og != 0) {
            result = result + og % 10;
            og = og / 10;
            result = result * 10;
        }
        if (result / 10 == x) {
            return true;
        } else {
            return false;
        }
    }
};
