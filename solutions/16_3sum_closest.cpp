class Solution {
#include<algorithm>
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int closest = nums[0] + nums[1] + nums[2];  // initialize with first triplet
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if(abs(sum - target) < abs(closest - target)) {
                    closest = sum;
                }

                if(sum < target) {
                    left++;
                } else if(sum > target) {
                    right--;
                } else {
                    // sum == target, best possible, return immediately
                    return target;
                }
            }
        }
        return closest;
    }
};