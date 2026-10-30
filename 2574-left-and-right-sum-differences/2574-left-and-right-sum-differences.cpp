class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total=0, sum=0;int n= nums.size();
        for( int i=0; i<nums.size(); i++){
            total= total+ nums[i];
        }
        vector<int> ans(n);int leftsum=0; int rightsum=total;
        for( int i=0; i<n; i++){
            rightsum= rightsum- nums[i];
         ans[i]= abs(leftsum-rightsum);
         leftsum= leftsum+ nums[i];
         
        }
        return ans;
    }
};