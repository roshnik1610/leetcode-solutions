class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
       int inc=1;
       int dec=1;int decim=1; int incim=1;
       for( int i=0; i<nums.size()-1; i++){
        if( nums[i]> nums[i+1]){ dec++; decim= max(decim, dec); inc=1;}
        if( nums[i]<nums[i+1]){ inc++; incim= max(incim, inc);dec=1;}
        if( nums[i]== nums[i+1]){ dec=1; inc=1;}
       } 
       return max( incim,decim);
    }
};