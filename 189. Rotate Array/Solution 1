class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if (k == 0) {
            return;
        }
        
        int toKeep = nums[nums.size() - 1];
        
        for (int i = nums.size() - 1; i > 0; i--) {
            nums[i] = nums[i - 1];
        }
        
        nums[0] = toKeep;
        
        rotate(nums, k - 1);
        
    }
};
