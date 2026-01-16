class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(a[n-i-1]>b[j]){
                swap(a[n-i-1],b[j]);
                
            }
            i++;
            j++;
            
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
    }
};