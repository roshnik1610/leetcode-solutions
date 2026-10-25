class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1||numRows >= s.size()) {
    return s;}
      vector<string>rows(numRows);int dir=-1;int currow=0; 
      for( char c:s){
        rows[currow]= rows[currow]+c;
        if(currow== numRows-1|| currow==0){
            if(dir==-1){dir=1;}
            else{
                dir=-1;
            }
        }
        currow+=  dir;
      }  
      string ans="";
      for( string s: rows){
        ans= ans+s;
      }
      return ans;
    }
};