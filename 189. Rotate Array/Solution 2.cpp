//Solution 2 utilizes recursion when k is greater or equal to the size of the array. 
//  When k is less than the size of the array, this algorithm uses another array to 
//  temporarily store values to rotate k times in O(n) time. 
//This algorithm beats 46.34% of cpp submissions.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if (k == 0 || nums.size() == 1) {
            return;
        }
        
        if (k >= nums.size()) {
            int toKeep = nums[nums.size() - 1];

            for (int i = nums.size() - 1; i > 0; i--) {
                nums[i] = nums[i - 1];
            }

            nums[0] = toKeep;

            rotate(nums, k - 1);
        } else {
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
        
    }
};
