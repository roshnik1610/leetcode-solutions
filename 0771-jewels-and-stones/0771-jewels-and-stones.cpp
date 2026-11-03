class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int arr[128]={0}; int ans=0;
        for( int i=0; i<jewels.length(); i++){
        arr[jewels[i]]++;
        }
        for( int i=0; i<stones.length(); i++){
            if( arr[stones[i]] >0){
             ans++;
            }
        }
        return ans;
    }
};