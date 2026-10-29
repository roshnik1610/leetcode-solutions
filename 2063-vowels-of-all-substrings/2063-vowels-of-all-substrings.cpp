class Solution {
public:
    long long countVowels(string word) {
   long ans=0;
   for( int i=0;i<word.length(); i++){
    char c= word[i];
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        ans= ans+ (long)(i+1)*(word.length()-i);
    }
   }
        return ans;
    }
};