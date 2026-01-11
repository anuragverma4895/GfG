class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        int n=s1.size();
        int m=s2.size();
        if(n!=m) return false;
        int arr[26]={0};
        for(int i=0;i<n;i++){
            arr[s1[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            arr[s2[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
};