class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        
        string s1=bitset<32>(m).to_string();
        string s2=bitset<32>(n).to_string();
        int count=0;
        for(int i=31;i>=0;i--){
            if(s1[i]!=s2[i]){
                return count+1;
            }else{
                count++;
            }
        }
        return -1;
        
    }
};