class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                v.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                v.push_back(arr[i]);
            }
        }
        arr=v;
    }
};