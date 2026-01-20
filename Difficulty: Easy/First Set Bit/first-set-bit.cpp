class Solution {
  public:
    int getFirstSetBit(int n) {
        string s=bitset<32>(n).to_string();
        int m=s.size();
        int count=0;
        for(int i=m-1;i>=0;i--){
            if(s[i]=='1'){
                break;
            }else{
                count++;
            }
        }
        return count+1;
    }
};