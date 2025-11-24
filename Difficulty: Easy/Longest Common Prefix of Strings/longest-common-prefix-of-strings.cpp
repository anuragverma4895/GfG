// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n=arr.size();
        int m=arr[0].size();
        string s="";
        int a =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[0][i]!=arr[j][i]){
                    a=1;
                    break;
                }
            }
            if(a==1){
                break;
            }else
                s+=arr[0][i];
        }
        return s;
    }
};