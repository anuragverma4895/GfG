class Solution {
  public:
    void sort012(vector<int>& arr) {
        int a=0,b=0,c=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) a++;
            else if(arr[i]==1) b++;
            else c++;
        }
        for(int i=0;i<arr.size();i++){
            if(i<a){
                arr[i]=0;
            }else if(i<a+b){
                arr[i]=1;
            }else{
                arr[i]=2;
            }
        }
    }
};