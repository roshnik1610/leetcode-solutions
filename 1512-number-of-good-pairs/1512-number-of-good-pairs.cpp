class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int count=0; int freq[101]={0};
       for( int i=0; i<nums.size(); i++){
        count= count+ freq[nums[i]];
        freq[nums[i]]++;
       } 
        return count;
    }
};