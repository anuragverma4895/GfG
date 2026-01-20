class Solution {
  public:
    bool checkKthBit(int n, int k) {
        string s = bitset<32>(n).to_string();
        int sz=s.size();
        if(s[sz-k-1]=='1') return true;
        else return false;
        
    }
};