class Solution {
  public:
    // solve using function
    // int setBits(int n) {
    //     string s=bitset<32>(n).to_string();
    //     int c=count(s.begin(),s.end(),'1');
    //     return c;
    // }
    
    // using bit manupulation
    int setBits(int n){
        int count=0;
        while(n){
            n=n&(n-1);
            count++;
        }
        return count;
    }
};