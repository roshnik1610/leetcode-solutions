class Solution {
public:
    bool canAliceWin(int n) {
        int want=10; int count=0;
        while(n>=want){
            n= n-want;
            want--;
            count++;

        }
        if( count%2==0){
            return false;
        }
        return true;
    }
};