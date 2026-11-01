class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        int n= nums.size();
        int mini=INT_MAX;
        for( int i=0; i<n; i++){
            if(nums[i]<mini){
                mini= nums[i];
            }
        }
        for( int i=0; i<n ;i++){
            if( nums[i]>mini){
                ans= ans+(nums[i]-mini);
            }
        }
        return ans;
    }
};