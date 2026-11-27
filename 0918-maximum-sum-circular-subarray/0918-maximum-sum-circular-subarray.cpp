class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currMax = nums[0];
        int currMin = nums[0];
        int res = nums[0];
        int totalSum = 0;
        for(int i = 0; i<nums.size(); i++){
            totalSum = totalSum + nums[i];
        }
        for(int i = 1; i < nums.size(); i++){
            currMax = max(nums[i], currMax+nums[i]);
            currMin = min(nums[i], currMin+nums[i]);
            if(totalSum==currMin){
                res = max(res,currMax);
            }
            else{
                res = max(res, max(currMax, (totalSum - currMin)));
            }
        }

        return res;
    }
};