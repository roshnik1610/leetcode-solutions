class Solution {
public:
    int minMoves2(vector<int>& nums) {
     sort( nums.begin(), nums.end());
     int n= nums.size();int ans=0;int mid=0;
     
       mid= n/2;
   
     for( int i=0; i<nums.size(); i++){
        if( nums[i]!= nums[mid]){
         ans= ans+ abs(nums[i]-nums[mid]);
        }
     }
     return ans;
    }
};