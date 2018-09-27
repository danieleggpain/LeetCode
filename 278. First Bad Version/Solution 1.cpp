// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    
    int find(int lower, int upper) {
        
        if (lower == upper) return lower;
        
        int curr = (upper - lower) / 2 + lower;
        
        if (isBadVersion(curr)) {
            return find(lower, curr);
        } else {
            return find(curr + 1, upper);
        }
        
    }
    
    int firstBadVersion(int n) {
        
        return find(1, n);
    }
};
