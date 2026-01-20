class Solution {
  public:
    int setBits(int n) {
        string s=bitset<32>(n).to_string();
        int c=count(s.begin(),s.end(),'1');
        return c;
    }
};