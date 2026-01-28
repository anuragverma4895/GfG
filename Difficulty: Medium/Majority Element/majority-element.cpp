class Solution {
  public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int winner=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(count==0){
                winner=nums[i];
                count++;
            }else if(nums[i]==winner){
                count++;
            }else{
                count--;
            }
        }
        count=0;
        for(auto x:nums){
            if(x==winner){
                count++;
            }
        }
        if(count>n/2) return winner;
        return -1;
    }
};