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
