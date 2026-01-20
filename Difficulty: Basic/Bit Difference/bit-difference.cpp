class Solution {
  public:
    int countBitsFlip(int a, int b) {
        string s1=bitset<32>(a).to_string();
        string s2=bitset<32>(b).to_string();
        int count=0;
        for(int i=31;i>=0;i--){
            if(s2[i]!=s1[i]){
                count++;
            }
        }
        return count;
    }
};