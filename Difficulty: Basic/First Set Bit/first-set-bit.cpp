class Solution {
  public:
    int findPosition(int n) {
        string s=bitset<32>(n).to_string();
        int cnt=count(s.begin(),s.end(),'1');
        if(cnt!=1) return -1;
        int pos=1;
        for(int i=31;i>=0;i--){
            if(s[i]=='1'){
                return pos;
            }
            pos++;
        }
        return -1;
    }
};