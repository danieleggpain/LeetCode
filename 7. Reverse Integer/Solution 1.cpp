//Solution 1 simply rotates the number by mod 10 every time, while checking to make sure there is no overflow. 
//This algorithm beats 97.93% of cpp submissions.

#include <limits>

class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        int runningCount = x;
        if (x == 0) return reversed;
        while (runningCount != 0) {
            if (reversed > std::numeric_limits<int>::max() / 10 || reversed < std::numeric_limits<int>::min() / 10) return 0;
            if (reversed == std::numeric_limits<int>::max() / 10 || reversed == std::numeric_limits<int>::min() / 10) {
                if (x < 0 && runningCount % 10 > 8) return 0;
                if (x > 0 && runningCount % 10 > 7) return 0;
            }
            reversed = reversed * 10 + (runningCount % 10);
            runningCount /= 10;
        }
        return reversed;
    }
};
