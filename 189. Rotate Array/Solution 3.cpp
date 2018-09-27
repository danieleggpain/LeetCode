//Solution 3 got rid of recursion. The most important line in this solution is line 9, 
//  where I realized that k can always be modified such that k is smaller than the size of the array. 
//  For example, for an array [1, 2, 3, 4, 5], rotating 5 times is the same as not rotating at all. 
//  Rotating 6 times is the same as rotating 1 time. 
//This algorithm beats 100.00% of cpp submissions.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if (k == 0 || nums.size() == 1) {
            return;
        }
        
        k = k % nums.size();
        vector<int> temp;

        for (int i = nums.size() - k; i < nums.size(); i++){
            temp.emplace_back(nums[i]);
        }

        for (int i = nums.size() - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }

        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }

        
    }
};
