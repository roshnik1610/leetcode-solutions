class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
       long long res=  1LL*cost1* need1 + 1LL*cost2*need2; long long ans=0;
       long long sum= 1LL*max(need1, need2) * costBoth ;
       if( need1>need2){
        need1= need1-need2;
        ans+= 1LL*need2*costBoth; 
        ans+= 1LL*need1*cost1;
       }
       else if(need1<need2){
       need2= need2-need1;
       ans+= 1LL*need1*costBoth;
       ans+= 1LL*need2*cost2;
       }
       else{
        ans+= 1LL* costBoth*need2;
       }

       
       return min({sum, res, ans});
    }
};